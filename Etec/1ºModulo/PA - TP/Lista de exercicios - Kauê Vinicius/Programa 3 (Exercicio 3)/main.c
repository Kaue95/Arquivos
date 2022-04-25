#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int val1, res;
	setlocale(LC_ALL,"");
	printf("Esse programa faz a subtração e mostra o resultado se ele for maior que três.");
	printf("\nDigite um número:");
	fflush(stdin);
	scanf("%d", &val1);
	res = val1 - 10;
	if(res > 3)
	{
		printf("\nO resultado da subtração é maior que três, portanto o resultado é: %d!", res);
	}
	if(res < 3)
	{
		printf("\nO resultado não pode ser mostrado, por conta de ser menor que três.");
	}	
	if(res == 3)
	{	
		printf("\nO resultado da subtração é igual a 3!");
	}
	getch();
}
