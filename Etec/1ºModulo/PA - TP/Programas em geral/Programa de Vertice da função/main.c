#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
//Kaue Vinicius da Silva Sousa
/*float delta (float vala, float valb, float valc);

void main()
{
	float valor1, valor2, valor3, x1, x2, delt1;
	setlocale(LC_ALL,"");
	system("cls");
	printf("Esse programa calcula as raizes de uma função quadrada.");
	printf("\nDigite o valor de A:");
	fflush(stdin);
	scanf("%f",&valor1);
	printf("\nDigite o valor de B:");
	fflush(stdin);
	scanf("%f",&valor2);
	printf("\nDigite o valor de C:");
	fflush(stdin);
	scanf("%f",&valor3);
	delt1 = delta (valor1, valor2, valor3);
	x1 = (-valor2 + sqrt(delt1)) / (2*valor1);
	x2 = (-valor2 - sqrt(delt1)) / (2*valor1);
	printf("\nAs raizes são: \nx1 = %.2f  \nx2 = %.2f", x1,x2);
	getch();
	
}

float delta (float vala, float valb, float valc)
{
	float del;
	del = pow(valb,2) - (4 * vala * valc);
	return del;
}*/

//float delta (float va, float vb, float vc);

void main()
{
	float a, b, c, delta, x, x1, x2, xv, yv;
	setlocale(LC_ALL,"");
	Cor(0x0D);
	system("cls");
	printf("Esse programa calcula as vertices de uma função quadrada.");
	voltar:
	Cor(0x09);
	printf("\n\nDigite o valor de A:");
	fflush(stdin);
	scanf("%f",&a);
	if(a == 0)
	{
		printf("\nO número da função é menor ou igual a zero, por favor digite o número novamente");
		getch();
		system("cls");
		a = 0;
		goto voltar;
	}
	if(a!= 0);
	{
		printf("\nDigite o valor de B:");
		fflush(stdin);
		scanf("%f",&b);
		printf("\nDigite o valor de C:");
		fflush(stdin);
		scanf("%f",&c);
		Cor(0x02);
		printf("\nf(x) = %.2fx^2 + (%.2f)x + (%.2f)", a, b, c); 
		delta = pow(b, 2) - 4 * a * c;
		printf("\nDelta = %.2f", delta);
		if(delta > 0)
		{
			x1 = (-b + sqrt(delta))/2 * a;
			x2 = (-b + sqrt(delta))/2 * a;
			printf("\n\nAs duas raizes de x são:");
			printf("\nx1 = %.2f \nx2 = %.2f", x1, x2);
		}
		if(delta == 0)
		{
			x = (-b + sqrt(delta))/2 * a;
			printf("\nDelta = 0, uma única raiz real");
			printf("\nx = %.2f", x);
		}
		xv = (-b)/(2*a);
		yv = (-delta)/(4 * a);
		Cor(0x05);
		printf("\n\nCalculos dos vertices:");
		printf("\nVertice de X = %.2f\nVertice de Y = %.2f", xv, yv);
		Cor(0x09);
		
	}
}

/*float delta (float va, float vb, float vc)
{
	float delta;
	delta = pow(vb, 2) - 4 * va * vc;
	return delta;
}*/
