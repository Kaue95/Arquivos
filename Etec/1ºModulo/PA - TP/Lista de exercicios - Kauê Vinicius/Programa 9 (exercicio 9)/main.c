#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int val1, val2, soma1, soma2;
	setlocale(LC_ALL, "");
	printf("Esse programa faz o calculo de n�meros divididos por 2, e apresenta o resultado se for maior que 20.");
	printf("\nDigite o 1� n�mero:");
	scanf("%i", &val1);
	printf("\nDigite o 2� n�mero:");
	scanf("%i", &val2);
	soma1 = val1/2;
	soma2 = val2/2;
	if(soma1 > 20)
	{
		printf("\nA divis�o do 1� n�mero � %i, � maior que 20!", soma1);
	}
	else
	{
		printf("\nO 1� n�mero n�o � maior que 20!");
	}
	if(soma2 > 20)
	{
		printf("\nA divis�o do 2� n�mero � %i, � maior que 20!", soma2);
	}
	else
	{
		printf("\nO 2� n�mero n�o � maior que 20!");
	}
	getch();

}

