#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
/* 2. Ler 10 n�meros e imprimir quantos s�o pares e quantos s�o �mpares.*/
// Desenvolvido por Kaue Vinicius da Silva Sousa
// 04-05-2021
void main()
{
	int par=0, impar=0, x, num;
	setlocale(LC_ALL,"");
	Cor(0x09);
	system("cls");
	printf("Esse programa l� 10 n�mero e mostra quantos s�o pares e quantos s�o �mpares.");
	while(x < 10)
	{
		printf("\nDigite um n�mero: ");
		scanf("%i", &num);
		if(num % 2 == 0)
		{
			par++;
		}
		else
		{
			impar++;
		}
		x++;	
	}
	printf("\nQuantidade de n�meros inseridos: %i ", x);
	printf("\nQunatidade de n�meros pares: %i ", par);
	printf("\nQunatidade de n�meros �mpares: %i ", impar);
	getch();
}


