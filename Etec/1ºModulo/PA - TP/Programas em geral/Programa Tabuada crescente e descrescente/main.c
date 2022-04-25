#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
void main()
{
	int x=2, y=14, tabu1=1, tabu2=10, l1=12, l2;
	Cor(0x09);
	system("cls");
	setlocale(LC_ALL,"");
	printf("Tabuada Normal e Invertida.");
	do
	{
		gotoxy(1,x);
		printf(" 01 x %02d = %02d  |", tabu1,tabu1*1);
		
		gotoxy(20,x);
		printf(" 02 x %02d = %02d  |", tabu2,tabu2*2);
		
		gotoxy(40,x);
		printf(" 03 x %02d = %02d  |", tabu1,tabu1*3);
		
		gotoxy(60,x);
		printf(" 04 x %02d = %02d  |", tabu2,tabu2*4);
		
		gotoxy(80,x);
		printf(" 05 x %02d = %02d   |", tabu1,tabu1*5);
		
		for(l2;l2<=96;l2++)
		{
			gotoxy(l2,l1);
			printf("_");
		}
		
		
		gotoxy(1,y);
		printf(" 06 x %02d = %02d  |", tabu2,tabu2*6);
		
		gotoxy(20,y);
		printf(" 07 x %02d = %02d  |", tabu1,tabu1*7);
		
		gotoxy(40,y);
		printf(" 08 x %02d = %02d  |", tabu2,tabu2*8);
		
		gotoxy(60,y);
		printf(" 09 x %02d = %02d  |", tabu1,tabu1*9);
		
		gotoxy(80,y);
		printf(" 10 x %02d = %02d  |", tabu2,tabu2*10);
		
		y++;
		x++;
		tabu1++;
		tabu2--;
	}while(tabu1<=10);
	getch();
	
}
