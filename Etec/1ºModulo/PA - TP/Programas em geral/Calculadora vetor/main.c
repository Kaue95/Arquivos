#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
void main()
{
	int i, valor1[5], valor2[5];
	char op;
	float vetor1[5];
	setlocale(LC_ALL,"");
	Cor(0x0F);
	system("cls");
	printf("Esse programa executa uma das 4 operações matemáticas.");
	printf("\n\nDigite (+) para Adição. \nDigite (-) para Subtração. \nDigite (x) para Multiplicação. \nDigite (/) para Divisão.");
	printf("\n\nEscolha qual operação deseja realizar:");
	fflush(stdin);
	op = getchar();
	for (i=0; i<5; i++)
	{
		printf("\nDigite o %dº valor do vetor 1:", i+1);
		scanf("%d", &valor1[i]);
	}
	for (i=0; i<5; i++)
	{
		printf("\nDigite o %dº valor do vetor 2:", i+1);
		scanf("%d", &valor2[i]);
	}
	switch(op)
	{
		case '+':
			for (i=0; i<5; i++)
			{
				vetor1[i]=valor1[i]+valor2[i];
			}
		break;
		
		case '-':
			for (i=0; i<5; i++)
			{
				vetor1[i]=valor1[i]-valor2[i];
			}
		break;
		
		case 'x':
			for (i=0; i<5; i++)
			{
				vetor1[i]=valor1[i]*valor2[i];
			}
		break;
		
		case 'X':
			for (i=0; i<5; i++)
			{
				vetor1[i]=valor1[i]*valor2[i];
			}
		break;
		
		case '/':
			for (i=0; i<5; i++)
			{
				vetor1[i]=(float)valor1[i]/(float)valor2[i];
			}
		break;
		
		default:
			printf("\nVocê escolheu a opção incorreta, reinicie o programa!");
			getch();
			exit(1);
	}
	for (i=0; i<5; i++)
	{
		printf("\nResultado da posição %dº: %.2f",i+1, vetor1[i]);
	}
	getch();
}
