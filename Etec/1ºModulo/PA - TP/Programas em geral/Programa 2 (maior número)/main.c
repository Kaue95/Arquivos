#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int val1, val2, val3;
	setlocale(LC_ALL, "");
	printf("Esse programa verifica qual � o maior n�mero!");
	printf("\nDigite o 1� n�mero:");
	scanf("%i", &val1);
	printf("\nDigite o 2� n�mero:");
	scanf("%i", &val2);
	printf("\nDigite o 3� n�mero:");
	scanf("%i", &val3);
	if(val1 > val2 && val1 > val3)
	{
		printf("\nO 1� n�mero � o maior valor!");
	}
	if(val2 > val1 && val2 > val3)
	{
		printf("\nO 2� n�mero � o maior valor!");
	}
	if(val3 > val1 && val3 > val2)
	{
		printf("\nO 3� n�mero � o maior valor!");
	}
	if(val3 == val2 && val3 > val1)
	{
		printf("\nO 2� e o 3� n�meros s�o os maiores valores!");
	}
	if(val1 == val2 && val1 > val3)
	{
		printf("\nO 1� e o 2� n�meros s�o os maiores valores!");
	}
	if(val1 == val3 && val1 > val2)
	{
		printf("\nO 1� e o 3� n�meros s�o os maiores valores!");
	}
	if(val1 == val2 && val2 == val3)
	{
		printf("\nOs n�meros tem o mesmo valor.");
	}
		getch();
		
	}
	

	
	
	
	
	
	

