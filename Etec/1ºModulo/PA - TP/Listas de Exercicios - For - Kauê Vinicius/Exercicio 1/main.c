#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
void main()
{
	int x;
	Cor(0xF9);
	system("cls");
	setlocale(LC_ALL,"");
	printf("Este programa imprime os números de 1 a 20.\n");
	for(x=1;x<21; x++)
	{
		printf(" \n%d ",x);
	}
	getch();
}
