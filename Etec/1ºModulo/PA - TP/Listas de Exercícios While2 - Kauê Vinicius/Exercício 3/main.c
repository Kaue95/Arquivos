#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
/*3. Utilizando a estrutura de repeti��o for, fa�a um programa em C que receba 10 n�meros e conte quantos 
deles est�o no intervalo [10,20] e quantos deles est�o fora do intervalo, escrevendo estas informa��es.*/
//Desenvolvido por Kaue Vinicius da Silva Sousa
// 04-05-2021
void main()
{
	int numero, entre=0, fora=0, x=0;
	setlocale(LC_ALL,"");
	Cor(0x09);
	system("cls");
	printf("Esse programa recebe 10 n�meros");
	printf("\ne informa quantos deles est�o no intervalo [10,20] e quantos deles est�o fora do intervalo");
	while(x < 10)
	{
		printf("\nDigite um n�mero:");
		scanf("%i", &numero);
		if(numero > 10 && numero < 20)
		{
			entre++;
		}
		else
		{
			fora++;
		}
		x++;
	}
	printf("\nForam digitados entre 10 e 20,(%i n�meros)",entre);
	printf("\nForam digitados fora de 10 e 20,(%i n�meros)",fora);
	getch();
}
