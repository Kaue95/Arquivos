#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int val1, val2, val3;
	setlocale(LC_ALL, "");
	printf("Esse programa verifica qual é o maior número!");
	printf("\nDigite o 1º número:");
	scanf("%i", &val1);
	printf("\nDigite o 2º número:");
	scanf("%i", &val2);
	printf("\nDigite o 3º número:");
	scanf("%i", &val3);
	if(val1 > val2 && val1 > val3)
	{
		printf("\nO 1º número é o maior valor!");
	}
	if(val2 > val1 && val2 > val3)
	{
		printf("\nO 2º número é o maior valor!");
	}
	if(val3 > val1 && val3 > val2)
	{
		printf("\nO 3º número é o maior valor!");
	}
	if(val3 == val2 && val3 > val1)
	{
		printf("\nO 2º e o 3º números são os maiores valores!");
	}
	if(val1 == val2 && val1 > val3)
	{
		printf("\nO 1º e o 2º números são os maiores valores!");
	}
	if(val1 == val3 && val1 > val2)
	{
		printf("\nO 1º e o 3º números são os maiores valores!");
	}
	if(val1 == val2 && val2 == val3)
	{
		printf("\nOs números tem o mesmo valor.");
	}
		getch();
		
	}
	

	
	
	
	
	
	

