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
	printf("Esse programa imprime os n�meros entre os dois n�meros digitados pelo usu�rio.");
	printf("\nDigite o primeiro n�mero: ");
	scanf("%d", &x);
	printf("\nDigite o segundo n�mero:  ");
	scanf("%d", &y);
	if(x==y)
	{
		printf("\nOs n�meros digitados s�o iguais!!");
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
