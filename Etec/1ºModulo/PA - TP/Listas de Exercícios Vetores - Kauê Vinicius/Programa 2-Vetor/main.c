#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "ControlesDaTela.cpp"
#include <locale.h>
#include <math.h>
#include <time.h>
/* 2.Desenvolva um programa que sorteia de 1 a 100, incluir 10 primeiros números pares em um vetor e 10 primeiros 
números ímpares em outro vetor, preencher em vetores separados. Somar todos os valores de pares e multiplicar 
todos os valores de ímpares, imprimir os resultados.*/
//Desenvolvido por: Kaue Vinicius da Silva Sousa
// ---14/06/2021---

void main()
{
	int vet[100],vet2[100], vetp[10], veti[10],resp,resi,y, x;
	int contp=0, conti=0,c=4;
	Cor(0x0A);
	setlocale(LC_ALL,"");
	system("cls");
	srand(time(NULL));	
	printf("Esse programa sorteia números de 1 a 100 e inclui os 10 primeiros pares e\nimpares em vetores, somando os pares e multiplicando os ímpares\n");
	gotoxy(30,3);
	Cor(0x05);
	printf("Números Sorteados:");
	for(x=0;x<100;x++)
	{
		vet[x] = rand()%100+1;
		//printf(" [%d] = %d ",x+1, vet[x]); //------------números dos sorteios
	}
	for(x=0;x<9;x++)
	{
		gotoxy(0,c+1);
		printf(" [%d] = %d ",x+1, vet[x]);
		c++;
	}
	c=4;
	for(x=10;x<19;x++)
	{
		gotoxy(15,c+1);
		printf(" [%d] = %d ",x+1, vet[x]);
		c++;
	}
	c=4;
	for(x=20;x<29;x++)
	{
		gotoxy(30,c+1);
		printf(" [%d] = %d ",x+1, vet[x]);
		c++;
	}
	c=4;
	for(x=30;x<39;x++)
	{
		gotoxy(45,c+1);
		printf(" [%d] = %d ",x+1, vet[x]);
		c++;
	}
	c=4;
	for(x=40;x<49;x++)
	{
		gotoxy(60,c+1);
		printf(" [%d] = %d ",x+1, vet[x]);
		c++;
	}
	c=4;
	for(x=50;x<59;x++)
	{
		gotoxy(75,c+1);
		printf(" [%d] = %d ",x+1, vet[x]);
		c++;
	}
	c=14;
	for(x=60;x<69;x++)
	{
		gotoxy(0,c+1);
		printf(" [%d] = %d ",x+1, vet[x]);
		c++;
	}
	c=14;
	for(x=70;x<79;x++)
	{
		gotoxy(15,c+1);
		printf(" [%d] = %d ",x+1, vet[x]);
		c++;
	}
	c=14;
	for(x=80;x<89;x++)
	{
		gotoxy(30,c+1);
		printf(" [%d] = %d ",x+1, vet[x]);
		c++;
	}
	c=14;
	for(x=90;x<99;x++)
	{
		gotoxy(45,c+1);
		printf(" [%d] = %d ",x+1, vet[x]);
		c++;
	}
		c=14;
	for(x=99;x<100;x++)
	{
		gotoxy(60,c+1);
		printf(" [%d] = %d ",x+1, vet[x]);
		c++;
	}
	Cor(0x0A);
	gotoxy(0,24);
	printf("\nNúmeros pares:\n");
	for(x=0;x<100;x++)
	{
		if(vet[x]%2==0)
		{
			vetp[y] = vet[x];
			Cor(0x03);
			printf("\nVetor: %d | Número: %d",x, vetp[y]);
			resp = resp + vetp[y];
			contp++;
			if(contp == 10)
			{
				break;
			}
		}	
	}
	printf("\n\n");
	for(x=0;x<100;x++)
	{
		vet2[x] = rand()%100+1;
		//printf(" [%d] = %d ",x, vet2[x]); //------------números dos sorteios
	}
	Cor(0x0A);
	printf("\nNúmeros impares:\n");
	//c=25;
	for(x=0;x<100;x++)
	{
		if(vet2[x]%2!=0)
		{
			veti[y] = vet2[x];
			//gotoxy(15,c+1);
			Cor(0x03);
			printf("\nVetor: %d | Número: %d",x, veti[y]);
			resi = resi * veti[y];
			conti++;
			if(conti == 10)
			{
				break;
			}
		}	
	}
	Cor(0x0A);
	gotoxy(70,25);
	printf("Resultado da soma: %d", resp);
	gotoxy(70,26);
	printf("Resultado da multiplicação: %d", resi);
	getch();
}
