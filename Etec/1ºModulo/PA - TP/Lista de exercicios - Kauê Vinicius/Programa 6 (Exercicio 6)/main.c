#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int val1, res;
	setlocale(LC_ALL,"");
	printf("Esse programa faz a multiplica��o de um n�mero por 3 e mostra caso o resultado for maior que 15.");
	printf("\nDigite um n�mero");
	fflush(stdin);
	scanf("%d", &val1);
	res = val1 * 3;
	if(res > 15)
	{
		printf("\nO resultado da multiplica��o � maior que 15, portanto o resultado �: %d!", res);
	}
	else
	{
		printf("\nO resultado n�o pode ser mostrado!");
	}
	getch();
}
