#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "ControlesDaTela.cpp"
void main()
{
	int x, y;
	Cor(0x9);
	system("cls");
	DesligaCursor();
	for(;;)
	{
	
		for(x=29, y=0;x<=0, y<=59;x--,y=y+2)
		{
			Cor(0x9);
			gotoxy(y,x);
			printf(" * ");
			Sleep(50);
			gotoxy(y,x);
			printf(" ");
		}
		for(x=0, y=60;x<=29, y<=119;x++,y=y+2)
		{
			gotoxy(y,x);
			printf(" * ");
			Sleep(50);
			gotoxy(y,x);
			printf(" ");
		}
		for(x=0, y=0;x<=29, y<=59;x++,y=y+2)
		{
			Cor(0xA);
			gotoxy(y,x);
			printf(" * ");
			Sleep(50);
			gotoxy(y,x);
			printf(" ");
		}
		for(x=29, y=60;x<=0, y<=119;x--,y=y+2)
		{
			gotoxy(y,x);
			printf(" * ");
			Sleep(50);
			gotoxy(y,x);
			printf(" ");
		}
		system("cls");
	}
	getch();
}
