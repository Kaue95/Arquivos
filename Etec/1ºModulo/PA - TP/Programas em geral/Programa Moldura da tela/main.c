#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "ControlesDaTela.cpp"
void main()
{
	int x;
	Cor(0x9);
	system("cls");
	gotoxy(0,0);
	printf("\xC9");
	for(x=1; x<=59; x++)
	{
		gotoxy(x,0);
		printf("\xCD");
	}
	gotoxy(60,0);
	printf("\xCB");
		for(x=61; x<=119; x++)
	{
		gotoxy(x,0);
		printf("\xCD");
	}
	gotoxy(119,0);
	printf("\xBB");
	for(x=1; x<=14; x++)
	{
		gotoxy(0,x);
		printf("\xBA");
	}
	gotoxy(0,15);
	printf("\xCC");
	for(x=16; x<=29; x++)
	{
		gotoxy(0,x);
		printf("\xBA");
	}
	gotoxy(0,29);
	printf("\xC8");
	for(x=1; x<=59; x++)
	{
		gotoxy(x,29);
		printf("\xCD");
	}
		gotoxy(60,29);
		printf("\xCA");
		for(x=61; x<=119; x++)
	{
		gotoxy(x,29);
		printf("\xCD");
	}
	gotoxy(119,29);
	printf("\xBC");
	for(x=1; x<=14; x++)
	{
		gotoxy(119,x);
		printf("\xBA");
	}
	gotoxy(119,15);
	printf("\xB9");
	
	for(x=16; x<=29; x++)
	{
		gotoxy(119,x);
		printf("\xBA");
	}
	gotoxy(119,29);
	printf("\xBC");
	for(x=1; x<=59; x++)
	{
		gotoxy(x,15);
		printf("\xCD");
	}
	gotoxy(60,15);
	printf("\xCE");
		for(x=61; x<=118; x++)
	{
		gotoxy(x,15);
		printf("\xCD");
	}
	for(x=16; x<=28; x++)
	{
		gotoxy(60,x);
		printf("\xBA");
	}
	for(x=1; x<=14; x++)
	{
		gotoxy(60,x);
		printf("\xBA");
	}
	gotoxy(62,12);
	printf("*");
	gotoxy(64,13);
	printf("*");
	gotoxy(66,14);
	printf("*");
	
	gotoxy(58,12);
	printf("*");
	gotoxy(56,13);
	printf("*");
	gotoxy(54,14);
	printf("*");
	
	gotoxy(62,18);
	printf("*");
	gotoxy(64,17);
	printf("*");
	gotoxy(66,16);
	printf("*");
	
	gotoxy(58,18);
	printf("*");
	gotoxy(56,17);
	printf("*");
	gotoxy(54,16);
	printf("*");
	getch();
}
