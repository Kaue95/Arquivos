#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int x, numero;
	system("cls");
	setlocale(LC_ALL,"");
	printf("Esse programa imprime números entre o valor digitado e o número 1 de forma decrescente.");
	printf("\nDigite o número desejado maior que 20:");
	scanf("%d", &numero);
	if(numero > 20)
	{
		for(x=numero-1 ; x>1 ; x--)
		{
			printf(" %02d ",x);
		}
	}
	else
	{
		printf("\nVocê digitou um número menor ou igual a 20!!");
	}

	getch();
	
}
