#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include "ControlesDaTela.cpp"
int main ()
{
	
	int x,y, n=0, par=0, impar=1, z=0,w=0;
	setlocale(LC_ALL,"");
	system ("cls");
	Cor (0x09);
	printf("Esse programa recebe dois valores (sendo o primeiro valor inferior ao segundo), depois");
	printf("\ncalcula a soma dos números pares no intervalo dos valores digitados e multiplica os números\nimpares nesse mesmo intervalo.\n");
	printf("\nDigite o primeiro valor:");
	fflush(stdin);
	scanf("%i",&z);
	printf("\nDigite o segundo valor:");
	fflush(stdin);
	scanf("%i",&w);
	if(z >= w)
	{
		printf("\nVocê digitou número incorreto, refazer!!!");
	}
	else
	{
		while(z<=w)
		{
			n=z;
			if (n%2==0)
			{
				printf("\n \nPares:");
				printf(" %i ",n);	
				par = par + n;
			}
			else
			{
				printf("\n \nImpares:");
				printf(" %i ",n);	
				impar = impar * n;
			}
			z++;
		}
		printf("\nO valor total de par é %d.",par);
		printf("\nO valor total de ímpar é %d.",impar);
	}
	getch();	
}
