#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
/*3. Utilizando a estrutura de repetição for, faça um programa em C que receba 10 números e conte quantos 
deles estão no intervalo [10,20] e quantos deles estão fora do intervalo, escrevendo estas informações.*/
//Desenvolvido por Kaue Vinicius da Silva Sousa
// 04-05-2021
void main()
{
	int numero, entre=0, fora=0, x=0;
	setlocale(LC_ALL,"");
	Cor(0x09);
	system("cls");
	printf("Esse programa recebe 10 números");
	printf("\ne informa quantos deles estão no intervalo [10,20] e quantos deles estão fora do intervalo");
	while(x < 10)
	{
		printf("\nDigite um número:");
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
	printf("\nForam digitados entre 10 e 20,(%i números)",entre);
	printf("\nForam digitados fora de 10 e 20,(%i números)",fora);
	getch();
}
