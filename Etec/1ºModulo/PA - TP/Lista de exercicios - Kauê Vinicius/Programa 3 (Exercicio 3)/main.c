#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int val1, res;
	setlocale(LC_ALL,"");
	printf("Esse programa faz a subtra��o e mostra o resultado se ele for maior que tr�s.");
	printf("\nDigite um n�mero:");
	fflush(stdin);
	scanf("%d", &val1);
	res = val1 - 10;
	if(res > 3)
	{
		printf("\nO resultado da subtra��o � maior que tr�s, portanto o resultado �: %d!", res);
	}
	if(res < 3)
	{
		printf("\nO resultado n�o pode ser mostrado, por conta de ser menor que tr�s.");
	}	
	if(res == 3)
	{	
		printf("\nO resultado da subtra��o � igual a 3!");
	}
	getch();
}
