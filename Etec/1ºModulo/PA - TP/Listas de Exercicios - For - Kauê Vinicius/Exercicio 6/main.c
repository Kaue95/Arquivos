#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int x, numero;
	system("cls");
	setlocale(LC_ALL,"");
	printf("Esse programa imprime n�meros entre o valor digitado e o n�mero 1 de forma decrescente.");
	printf("\nDigite o n�mero desejado maior que 20:");
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
		printf("\nVoc� digitou um n�mero menor ou igual a 20!!");
	}

	getch();
	
}
