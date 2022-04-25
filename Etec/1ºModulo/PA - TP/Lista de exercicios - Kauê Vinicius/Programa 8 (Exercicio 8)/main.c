#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int val1, val2;
	setlocale(LC_ALL,"");
	printf("Esse programa verifica se os números são iguais");
	printf("\nDigite o 1ª número");
	scanf("%i", &val1);
	printf("\nDigite o 2ª número");
	scanf("%i", &val2);
	if(val1 == val2)
	{
		printf("\nOs números são iguais: %i e %i!!!", val1, val2);
	}
	else
	{
		printf("\nValores não encontrado!");
	}
	getch();
}
