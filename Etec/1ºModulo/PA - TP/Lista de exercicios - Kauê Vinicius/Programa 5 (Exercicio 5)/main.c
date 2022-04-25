#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int val1, val2, soma, res1, res2;
	setlocale(LC_ALL,"");
	printf("Esse programa recebe 2 número e mostra os valores multiplicados por 10 se sua somatoria for menor que 20.");
	printf("\nDigite o 1º número:");
	scanf("%i", &val1);
	printf("\nDigite o 2º número:");
	scanf("%i", &val2);
	soma = val1 + val2;
	if(soma < 20)
	{	
		res1 = val1*10;
		res2 = val2*10;
		printf("\nOs valores são: %i e %i!", res1,res2);
	}
	else
	{
		printf("\nOs valores somados são maiores ou igual a 20.");
	}
	getch();
}

