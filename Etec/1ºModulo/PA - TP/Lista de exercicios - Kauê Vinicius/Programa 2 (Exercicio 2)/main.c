#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int val1, soma;
	setlocale(LC_ALL,"");
	printf("Esse programa soma o um valor a cinco e mostra caso ele for maior que dez!.");
	printf("\nDigite um número:");
	fflush(stdin);
	scanf("%d", &val1);
	soma = val1 + 5;
	if(soma > 10)
	{
		printf("\nO resultado da soma é maior que dez, portanto seu resultado é: %d!", soma);
	}
	else
	{
		printf("\nO valor não pode ser mostrado!");
	}
	getch();
}
