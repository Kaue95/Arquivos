#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int val1, val2, val3, soma;
	setlocale(LC_ALL,"");
	printf("Esse programa soma 3 valores e mostra o resultado caso ele for maior que 20.");
	printf("\nDigite o 1� n�mero:");
	fflush(stdin);
	scanf("%d", &val1);
	printf("\nDigite o 2� n�mero:");
	fflush(stdin);
	scanf("%d", &val2);
	printf("\nDigite o 3� n�mero:");
	fflush(stdin);
	scanf("%d", &val3);
	soma=val1+val2+val3;
	if(soma>20)
	{	
		printf("\nO resultado da soma dos tr�s valores �: %d!", soma);
	}
	else
	{
		printf("\nO resultado n�o pode ser mostrado.");
	}
	getch();
}
