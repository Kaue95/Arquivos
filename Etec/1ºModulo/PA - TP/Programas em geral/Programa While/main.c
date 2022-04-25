#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
void main()
{
	int x=1, val,xcol=6;
	setlocale(LC_ALL,"");
	Cor(0x09);
	system("cls");
	printf("Esse programa faz a tabuada que desejar apenas de números impares.");
	printf("\nDigite a tabuada desejada:");
	scanf("%d", &val);
	while(x<=10)
	{
		gotoxy(35,xcol);
		if(x%2!=0)
		{
		printf("%d x %d = %d",val,x,val*x);
		}
		xcol++;
		x++;
	}
	getch();
}
