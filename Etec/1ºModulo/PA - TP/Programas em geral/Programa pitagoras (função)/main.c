#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float pita (int ca, int co);//Prototipo da função

void main()
{
	int catadj, catop,hip;
	system("cls");
	printf("Esse programa faz o calculo de pit\xA0goras");
	printf("\nDigite o valor do cateto adjacente:");
	fflush(stdin);
	scanf("%d", &catadj);
	printf("\nDigite o valor do cateto oposto:");
	fflush(stdin);
	scanf("%d", &catop);
	hip = pita(catadj, catop);// chamada da função
	printf("\nO valor da hipotenusa \x82: %d!",hip);
	getch();	
}

 float pita (int ca, int co)
{
	float hipotenusa;
	hipotenusa = sqrt(pow(ca,2) + pow(co,2));
	return hipotenusa;
}
