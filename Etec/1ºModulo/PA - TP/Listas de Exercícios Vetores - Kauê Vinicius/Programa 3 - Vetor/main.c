#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include "ControlesDaTela.cpp"
/*3 	Desenvolva um programa que sorteia de 1 a 100, em um vetor de 100 posições, incluir da posição 45 a 55 em vetor, 
tirar a média desses valores, imprimir o resultado, o vetor de 100 números, o vetor de 10 posições e informar quantos números 
são maiores que a media e quantos são menores que a média.*/
//Kaue Vinicius da Silva Sousa
int main ()
{
	int  vetor[100], vet10[10], i=0, res, x, c=2,aux=0;
	float media;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	Cor (0X0A);
	system ("cls");
	gotoxy(78,0);
	printf("Esse programa sorteia sorteia 100 números ");
	gotoxy(77,1);
	printf("de 1 a 100 e informa a média dos vetores ");
	gotoxy(77,2);
	printf("da posição 45 a 55!!");
	fflush(stdin);
	Cor (0X0A);
	gotoxy(30,1);
	printf("Sorteio:\n");
	for(i=0; i<=100; i++)
	{
		vetor[i] = rand() %100 +1;
	}
	Cor (0X07);
	for(i=0; i<=9; i++)
	{
		printf("\nvet[%d]=%d ",i,vetor[i]);
	}
	for(i=10; i<=19; i++)
	{
		gotoxy(15,c+1);
		printf(" vet[%d]=%d ",i,vetor[i]);	
		c++;
	}
	c=2;
	for(i=20; i<=29; i++)
	{
		gotoxy(30,c+1);
		printf(" vet[%d]=%d ",i,vetor[i]);	
		c++;
	}
	c=2;
	for(i=30; i<=39; i++)
	{
		gotoxy(45,c+1);
		printf(" vet[%d]=%d ",i,vetor[i]);	
		c++;
	}
	c=2;
	for(i=40; i<=49; i++)
	{
		gotoxy(60,c+1);
		printf(" vet[%d]=%d ",i,vetor[i]);	
		c++;
	}
	c=15;
	for(i=50; i<=59; i++)
	{
		gotoxy(0,c+1);
		printf("vet[%d]=%d ",i,vetor[i]);	
		c++;
	}
	c=15;
	for(i=60; i<=69; i++)
	{
		gotoxy(15,c+1);
		printf(" vet[%d]=%d ",i,vetor[i]);	
		c++;
	}
	c=15;
	for(i=70; i<=79; i++)
	{
		gotoxy(30,c+1);
		printf(" vet[%d]=%d ",i,vetor[i]);	
		c++;
	}
	c=15;
	for(i=80; i<=89; i++)
	{
		gotoxy(45,c+1);
		printf(" vet[%d]=%d ",i,vetor[i]);	
		c++;
	}
	c=15;
	for(i=90; i<=99; i++)
	{
		gotoxy(60,c+1);
		printf(" vet[%d]=%d ",i,vetor[i]);	
		c++;
	}
	c=0;
	for(i=0; i<=26; i++)
	{
		gotoxy(75,c);
		printf(" | ");	
		c++;
	}
	c=0;
	for(i=0; i<=75; i++)
	{
		gotoxy(c,26);
		printf("_");	
		c++;
	}
	
	Cor (0X09);
	gotoxy(78,4);
	printf("Números nas posições 45 a 55:");
	for(i=45, x=0;i<56, x<=9; i++, x++)
	{
		vet10[x] = vetor[i];
	}
	c=4;	
	for(i=0 ,x=0; i<=9, x<=9; x++, i++)
	{
		gotoxy(78,c+2);
		printf("Números do vetor:[%d]= %d",i,vet10[x]);
		c++;
	}
	Cor (0X05);
	res = vet10[0]+vet10[1]+vet10[2]+vet10[3]+vet10[4]+vet10[5]+vet10[6]+vet10[7]+vet10[8]+vet10[9];
	media = res/10;
	c=0;
	gotoxy(78,17);
	printf("Média: = %.2f",media);
	gotoxy(0,29);
	Cor(0x0A);
	printf("\n\nNúmeros maiores que a média: ");
	for(i=0; i<=100; i++)
	{
		if (vetor[i]>media)
		{
			Cor(0x0F);
			printf(" %d ",vetor[i]);
			if(vetor[i]>100)
			{
				break;
			}
		}
	}
	Cor(0x0A);
	printf("\n\nNúmeros menores que a média:");
	for(i=0; i<=100; i++)
	{
		if (vetor[i]<media)
		{
			Cor(0x0F);
			printf(" %d",vetor[i]);
		}		
	}
	
	getch ();
}
