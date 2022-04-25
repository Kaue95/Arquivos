#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include "ControlesDaTela.cpp"
//Matriz de 3x3
//Desenvolvido por:Kaue Vinicius (Seu melhor aluno)
void main()
{
	int vet[3][3],a,b, det;
	setlocale(LC_ALL,"");
	Cor(0x09);
	printf("Esse programa calcula o determinante de uma matriz 3x3: \n");
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			printf("\nDigite o valor [%d] [%d]:",a,b);
			scanf("%d",&vet[a][b]);	
		}
	}
	det=(vet[0][0]*vet[1][1]*vet[2][2]) + (vet[0][1]*vet[1][2]*vet[2][0]) + (vet[0][2]*vet[1][0]*vet[2][1]) - (vet[0][2]*vet[1][1]*vet[2][0]) + (vet[0][0]*vet[1][2]*vet[2][1]) + (vet[0][1]*vet[1][0]*vet[2][2]);
	Cor(0x04);
	printf("\nO determinante é: %d!", det);
	getch();	
}
