#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
void main()
{
	int ca, co, hip, ca2, co2, soma;
	setlocale(LC_ALL,"");
	printf("Esse programa vai calcular a hipotenusa.");
	printf("\nDigite o valor do cateto adjacente:");
	fflush(stdin);
	scanf("%i", &ca);
	printf("\nDigite o valor do cateto oposto:");
	fflush(stdin);
	scanf("%i", &co);
	ca2 = pow(ca,2);//potenciação.
	co2 = pow(co,2);//potenciação.
	soma = ca2 + co2;
	hip = sqrt(ca2 + co2);//raiz quadrada ---- hip=sqrt(pow(ca,2)+pow(co,2));
	printf("\nO valor da hipotenusa é: %d!",hip);
	getch();
}

