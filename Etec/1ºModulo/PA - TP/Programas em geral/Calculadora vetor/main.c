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
	printf("Esse programa executa uma das 4 opera��es matem�ticas.");
	printf("\n\nDigite (+) para Adi��o. \nDigite (-) para Subtra��o. \nDigite (x) para Multiplica��o. \nDigite (/) para Divis�o.");
	printf("\n\nEscolha qual opera��o deseja realizar:");
	fflush(stdin);
	op = getchar();
	for (i=0; i<5; i++)
	{
		printf("\nDigite o %d� valor do vetor 1:", i+1);
		scanf("%d", &valor1[i]);
	}
	for (i=0; i<5; i++)
	{
		printf("\nDigite o %d� valor do vetor 2:", i+1);
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
			printf("\nVoc� escolheu a op��o incorreta, reinicie o programa!");
			getch();
			exit(1);
	}
	for (i=0; i<5; i++)
	{
		printf("\nResultado da posi��o %d�: %.2f",i+1, vetor1[i]);
	}
	getch();
}
