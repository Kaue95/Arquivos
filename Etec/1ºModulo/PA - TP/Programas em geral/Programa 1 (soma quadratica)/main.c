#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	
	int val1, val2, val3, val4, res;
	setlocale(LC_ALL,"");
	printf("\nEste Programa faz a soma quadratica de números");
	printf("\nDigite o valor1:");
	scanf("%i", &val1);
	printf("\nDigite o valor2:");
	scanf("%i", &val2);
	printf("\nDigite o valor3:");
	scanf("%i", &val3);
	printf("\nDigite o valor4:");
	scanf("%i", &val4);
	res = (val1 * val1) + (val2 * val2) + (val3 * val3) + (val4 * val4);
	printf("\nO resultado é de %.2i!", res);
	getch();
}
