#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
void main()
{
	int x;
	setlocale(LC_ALL,"");
	printf("Tabuada do 1 até a tabuada do 10 na mesma tela");
	for(x=0 ; x<=10 ; x++)
	{
		gotoxy(0,x+1);
		printf("1 X %d = %d",x,x*1);
	}
	for(x=0 ; x<=10 ; x++)
	{
		gotoxy(15,x+1);
		printf("2 X %d = %d",x,x*2);
	}
	for(x=0 ; x<=10 ; x++)
	{
		gotoxy(30,x+1);
		printf("3 X %d = %d",x,x*3);
	}
	for(x=0 ; x<=10 ; x++)
	{
		gotoxy(45,x+1);
		printf("4 X %d = %d",x,x*4);
	}
	for(x=0 ; x<=10 ; x++)
	{
		gotoxy(60,x+1);
		printf("5 X %d = %d",x,x*5);
	}
	for(x=0 ; x<=10 ; x++)
	{
		gotoxy(75,x+1);
		printf("6 X %d = %d",x,x*6);
	}
	for(x=0 ; x<=10 ; x++)
	{
		gotoxy(90,x+1);
		printf("7 X %d = %d",x,x*7);
	}
	for(x=0 ; x<=10 ; x++)
	{
		gotoxy(105,x+1);
		printf("8 X %d = %d",x,x*8);
	}
		for(x=0 ; x<=10 ; x++)
	{
		gotoxy(0,x+13);
		printf("9 X %d = %d",x,x*9);
	}
	for(x=0 ; x<=10 ; x++)
	{
		gotoxy(15,x+13);
		printf("10 X %d = %d",x,x*10);
	}
	getch();
}
