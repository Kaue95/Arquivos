#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
void main()
{
	int x, y;
	Cor(0x0F);
	setlocale(LC_ALL,"");
	system("cls");
	printf("Esse programa imprime os números entre os dois números digitados pelo usuário.");
	printf("\nDigite o primeiro número: ");
	scanf("%d", &x);
	printf("\nDigite o segundo número:  ");
	scanf("%d", &y);
	if(x==y)
	{
		printf("\nOs números digitados são iguais!!");
	}
	if(x>y)
		for(x,y; x>=y; y++)
		{
			printf(" %d ", y);
		}
	else
	{
		for(y,x; y>=x; x++)
		{
			printf(" %d ", x);
		}
	}
	getch();
}
