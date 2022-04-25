#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int val1, val2, val3, soma1, soma2, soma3;
	setlocale(LC_ALL, "");
	printf("Esse programa soma 5 aos valores digitados e mostra os maior que 10");
	printf("\nDigite o 1º número:");
	scanf("%i", &val1);
	printf("\nDigite o 2º número:");
	scanf("%i", &val2);
	printf("\nDigite o 3º número:");
	scanf("%i", &val3);
	soma1 = val1 + 5;
	soma2 = val2 + 5;
	soma3 = val3 + 5;
	if(soma1 > 10)
	{
		printf("\nO 1º número %i é maior que 10!!", soma1);
	}
	if(soma2 > 10)
	{
		printf("\nO 2º número %i é maior que 10!!", soma2);
	}
	if(soma3 > 10)
	{
		printf("\nO 3º número %i é maior que 10!!", soma3);
	}
	getch();
}

