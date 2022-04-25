#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "ControlesDaTela.cpp"
#include <locale.h>
//Desenvolvido por:Kaue Vinicius
void main()
{
	int tecla=0, pos=60,pos2=29;
	DesligaCursor();
	setlocale(LC_ALL,"");
	Cor(0xF0);
	getch();
	system("cls");
	gotoxy(pos,pos2);
	printf("A");
	while(1)
	{
		if(pos == 119)
		{
			gotoxy(39,3);
			Cor(0xF4);
			printf("Você não pode passar da área da tela:");
			gotoxy(39,4);
			printf("Retorne!");
			pos=118;
			getch();
			system("cls");
		}
		if(pos == 0)
		{
			gotoxy(39,3);
			Cor(0xF4);
			printf("Você não pode passar da área da tela:");
			gotoxy(39,4);
			printf("Retorne!");
			pos=1;
			getch();
			system("cls");
		}
		if(pos2 == 0)
		{
			gotoxy(39,3);
			Cor(0xF4);
			printf("Você não pode passar da área da tela:");
			gotoxy(39,4);
			printf("Retorne!");
			pos2=1;
			getch();
			system("cls");
		}
		if(pos2 == 30)
		{
			gotoxy(39,3);
			Cor(0xF4);
			printf("Você não pode passar da área da tela:");
			gotoxy(39,4);
			printf("Retorne!");
			pos2=29;
			getch();
			system("cls");
		}
		Cor(0xF0);
		tecla = getch();
		gotoxy(pos,pos2);
		printf(" ");
		if(tecla == 77)
		{
			pos++;
		}
		if(tecla == 75)
		{
			pos--;
		}
		gotoxy(pos,pos2);
		printf("A");
		
		gotoxy(pos,pos2);
		printf(" ");
		if(tecla == 80)
		{
			pos2++;
		}
		if(tecla == 72)
		{
			pos2--;
		}
		gotoxy(pos,pos2);
		printf("A");
	}
	getch();
	
}
