#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
void main()
{
	int x, ini;
	setlocale(LC_ALL,"");
	Cor(0x9F);
	system("cls");
	printf("Esse programa recebe um n�mero e imprime o intervalo at� o valor 20.");
	printf("\nDigite o valor �nicial:");
	scanf("%i", &ini);
	if(ini>20)
	{
		for(x=ini;x>=20;x--)
		{
			printf(" \n%i ", x);
		}
	}
	if(ini<20)
	{
		for(x=ini;x<=20;x++)
		{
			printf(" \n%i ", x);
		}
	}
	if(ini==20)
	{
		printf("\nN�o existe intervalo!!");
	}
	getch();
}
