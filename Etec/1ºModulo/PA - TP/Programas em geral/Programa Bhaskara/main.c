#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
void main()
{
	float A, B, C, x1, x2, delta;
	setlocale(LC_ALL,"");
	printf("Esse programa calcula Bhaskara!");
	printf("\nDigite o valor de A:");
	scanf("%f",&A);
	printf("\nDigite o valor de B:");
	scanf("%f",&B);
	printf("\nDigite o valor de C:");
	scanf("%f",&C);
	delta = pow(B,2)-(4*A*C);
	if(delta< 0)
	{
		printf("\nN�o tem raiz no eixo x, pertence aos n�meros complexos.");
		printf("\nO delta � de %.2f.", delta);
	}
	else if(delta == 0)
	{
		x1 = (-B)/ (2*A);
		printf("\nS� tem uma raiz!");
		printf("\nO de delta � de %.2f.", delta);
		printf("\nO valor da raiz � %.2f.", x1);
	}
	else if(A==0)
	{
		x1 = (-C)/B;
		printf("\nA equa��o � de 1� grau!");
		printf("\nO resultado da icognita � %.2f.",x1);
	}
	else 
	{
		x1 = (-B +sqrt(delta))/(2*A);
		x2 = (-B -sqrt(delta))/(2*A);
		printf("\nO delta � %.2f.", delta);
		printf("\nO valor de x1 � %.2f.", x1);
		printf("\nO valor de x2 � %.2f.", x2);
	}
	getch();
	
}
