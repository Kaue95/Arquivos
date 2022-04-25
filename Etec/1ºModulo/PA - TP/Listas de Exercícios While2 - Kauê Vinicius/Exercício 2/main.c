#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
/* 2. Ler 10 números e imprimir quantos são pares e quantos são ímpares.*/
// Desenvolvido por Kaue Vinicius da Silva Sousa
// 04-05-2021
void main()
{
	int par=0, impar=0, x, num;
	setlocale(LC_ALL,"");
	Cor(0x09);
	system("cls");
	printf("Esse programa lê 10 número e mostra quantos são pares e quantos são ímpares.");
	while(x < 10)
	{
		printf("\nDigite um número: ");
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
	printf("\nQuantidade de números inseridos: %i ", x);
	printf("\nQunatidade de números pares: %i ", par);
	printf("\nQunatidade de números ímpares: %i ", impar);
	getch();
}


