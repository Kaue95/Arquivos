#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{

	int val1;
	setlocale(LC_ALL,"");
	printf("Esse programa mostra o n�mero caso ele seja menor que cinco");
	printf("\nDigite um n�mero:");
	scanf("%d", &val1);
	if(val1 < 5)
	{
		printf("\nO valor %d � menor que 5", val1);
	}
	else
	{
		printf("\nO valor n�o pode ser mostrado!");
	}
	getch();
}
