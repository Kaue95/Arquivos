#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int val1, res;
	setlocale(LC_ALL,"");
	printf("Esse programa faz a multiplicação de um número por 3 e mostra caso o resultado for maior que 15.");
	printf("\nDigite um número");
	fflush(stdin);
	scanf("%d", &val1);
	res = val1 * 3;
	if(res > 15)
	{
		printf("\nO resultado da multiplicação é maior que 15, portanto o resultado é: %d!", res);
	}
	else
	{
		printf("\nO resultado não pode ser mostrado!");
	}
	getch();
}
