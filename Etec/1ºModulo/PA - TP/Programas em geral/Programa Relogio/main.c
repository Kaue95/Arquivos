#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
void main()
{
	int hora, min, seg, dia;
	Cor(0x9);
	DesligaCursor();
	system("cls");
	setlocale(LC_ALL,"");
	gotoxy(50,11);
	printf(" Relógio:");
	for(;;)
	{
		for(dia=1;dia<7;dia++)
		{
			for(hora=0;hora<24;hora++)
			{
				for(min=0;min<60;min++)
				{
					for(seg=0;seg<60;seg++)
					{
						Sleep(1000);
						gotoxy(50,13);
						printf(" %02d:%02d:%02d ",hora,min,seg);
						if(dia==1)
						{
							gotoxy(50,14);
							printf(" Domingo      ");
						}
						if(dia==2)
						{
							gotoxy(50,14);
							printf("Segunda-Feira");
						}
						if(dia==3)
						{
							gotoxy(50,14);
							printf("Terça-Feira  ");
						}
						if(dia==4)
						{
							gotoxy(50,14);
							printf("Quarta-Feira ");
						}
						if(dia==5)
						{
							gotoxy(50,14);
							printf("Quinta-Feira ");
						}
						if(dia==6)
						{
							gotoxy(50,14);
							printf("Sexta-Feira  ");
						}
						if(dia==7)
						{
							gotoxy(50,14);
							printf("Sábado       ");
						}
					}
				}
			}	
		}
	}

}
