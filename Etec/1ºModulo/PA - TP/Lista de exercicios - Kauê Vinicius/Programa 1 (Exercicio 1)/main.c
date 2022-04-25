#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{

	int val1;
	setlocale(LC_ALL,"");
	printf("Esse programa mostra o número caso ele seja menor que cinco");
	printf("\nDigite um número:");
	scanf("%d", &val1);
	if(val1 < 5)
	{
		printf("\nO valor %d é menor que 5", val1);
	}
	else
	{
		printf("\nO valor não pode ser mostrado!");
	}
	getch();
}
