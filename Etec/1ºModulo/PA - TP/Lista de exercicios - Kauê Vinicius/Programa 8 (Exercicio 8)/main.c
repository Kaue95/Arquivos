#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int val1, val2;
	setlocale(LC_ALL,"");
	printf("Esse programa verifica se os n�meros s�o iguais");
	printf("\nDigite o 1� n�mero");
	scanf("%i", &val1);
	printf("\nDigite o 2� n�mero");
	scanf("%i", &val2);
	if(val1 == val2)
	{
		printf("\nOs n�meros s�o iguais: %i e %i!!!", val1, val2);
	}
	else
	{
		printf("\nValores n�o encontrado!");
	}
	getch();
}
