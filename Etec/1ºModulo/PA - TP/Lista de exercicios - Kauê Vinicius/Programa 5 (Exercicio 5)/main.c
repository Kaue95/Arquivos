#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int val1, val2, soma, res1, res2;
	setlocale(LC_ALL,"");
	printf("Esse programa recebe 2 n�mero e mostra os valores multiplicados por 10 se sua somatoria for menor que 20.");
	printf("\nDigite o 1� n�mero:");
	scanf("%i", &val1);
	printf("\nDigite o 2� n�mero:");
	scanf("%i", &val2);
	soma = val1 + val2;
	if(soma < 20)
	{	
		res1 = val1*10;
		res2 = val2*10;
		printf("\nOs valores s�o: %i e %i!", res1,res2);
	}
	else
	{
		printf("\nOs valores somados s�o maiores ou igual a 20.");
	}
	getch();
}

