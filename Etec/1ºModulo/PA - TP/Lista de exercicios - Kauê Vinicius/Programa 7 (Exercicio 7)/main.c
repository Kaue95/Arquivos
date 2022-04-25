#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int val1, val2, val3, soma;
	setlocale(LC_ALL,"");
	printf("Esse programa soma 3 valores e mostra o resultado caso ele for maior que 20.");
	printf("\nDigite o 1º número:");
	fflush(stdin);
	scanf("%d", &val1);
	printf("\nDigite o 2º número:");
	fflush(stdin);
	scanf("%d", &val2);
	printf("\nDigite o 3º número:");
	fflush(stdin);
	scanf("%d", &val3);
	soma=val1+val2+val3;
	if(soma>20)
	{	
		printf("\nO resultado da soma dos três valores é: %d!", soma);
	}
	else
	{
		printf("\nO resultado não pode ser mostrado.");
	}
	getch();
}
