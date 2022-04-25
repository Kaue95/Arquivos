#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
/*1)Construa um algoritmo que receba a nacionalidade, altura e o sexo do usuário e verifique a seguinte classificação, mostrando-a na tela:

Nasceu no Brasil:
Mulher menor que 1,60 - Baixa 
Mulher entre 1,60 e 1,73 - Média 
Mulher acima de 1,73 - Alta
Homem menor que 1,68 - Baixo 
Homem entre 1,68 e 1,84 - Médio 
Homem acima de 1,84 - Alto

Nasceu na Alemanha:
Mulher menor que 1,70 - Baixa 
Mulher entre 1,70 e 1,80 - Média 
Mulher acima de 1,80 - Alta
Homem menor que 1,75 - Baixo 
Homem entre 1,75 e 1,85 - Médio 
Homem acima de 1,85 - Alto*/
void main()
{
	float altura;
	char sexo, nacionalidade;
	setlocale(LC_ALL,"");
	printf("Esse programa analisa a estatura da pessoa (alemã e brasileira).");
	printf("\nDigite sua nacionalidade");
	printf("\nDigite A -> para alemã");
	printf("\nDigite B -> para brasileira:");
	fflush(stdin);//limpa o buffer do teclado
	nacionalidade = getchar();//pegar letra...
	printf("\nDigite seu sexo");
	printf("\nSe for Masculino -> M");
	printf("\nSe for feminino -> F:");
	fflush(stdin);//limpa o buffer do teclado
	sexo = getchar();//pegar letra...
	printf("\nDigite sua altura em metros(exemplo 1.85):");
	fflush(stdin);//limpa o buffer do teclado
	scanf("%f",&altura);
	if(nacionalidade == 'A' || nacionalidade == 'a')
	{
		if(sexo == 'M' || sexo == 'm')
		{
			if(altura < 1.75)
			{
				printf("\nHomem Baixinho! nacionalidade:%c sexo:%c altura:%.2f",nacionalidade,sexo,altura);
			}
			if(altura >= 1.75 && altura <= 1.85)
			{
				printf("\nHomem medio! nacionalidade:%c sexo:%c altura:%.2f",nacionalidade,sexo,altura);
			}
			if(altura > 1.85)
			{
				printf("\nHomem Alto! nacionalidade:%c sexo:%c altura:%.2f",nacionalidade,sexo,altura);
			}
		}
		if(sexo == 'F' || sexo == 'f')
		{
			if(altura < 1.75)
			{
				printf("\nMulher Baixinha! nacionalidade:%c sexo:%c altura:%.2f",nacionalidade,sexo,altura);
			}
			if(altura >= 1.70 && altura <= 1.80)
			{
				printf("\nMulher media! nacionalidade:%c sexo:%c altura:%.2f",nacionalidade,sexo,altura);
			}
			if(altura > 1.80)
			{
				printf("\nMulher Alta! nacionalidade:%c sexo:%c altura:%.2f",nacionalidade,sexo,altura);
			}
		}
	}
	if(nacionalidade == 'B' || nacionalidade == 'b')
	{
		if(sexo == 'M' || sexo == 'm')
		{
			if(altura < 1.68)
			{
				printf("\nHomem Baixinho! nacionalidade:%c sexo:%c altura:%.2f",nacionalidade,sexo,altura);
			}
			if(altura >= 1.68 && altura <= 1.84)
			{
				printf("\nHomem medio! nacionalidade:%c sexo:%c altura:%.2f",nacionalidade,sexo,altura);
			}
			if(altura > 1.84)
			{
				printf("\nHomem Alto! nacionalidade:%c sexo:%c altura:%.2f",nacionalidade,sexo,altura);
			}
		}
		if(sexo == 'F' || sexo == 'f')
		{
			if(altura < 1.60)
			{
				printf("\nMulher Baixinha! nacionalidade:%c sexo:%c altura:%.2f",nacionalidade,sexo,altura);
			}
			if(altura >= 1.60 && altura <= 1.73)
			{
				printf("\nMulher media! nacionalidade:%c sexo:%c altura:%.2f",nacionalidade,sexo,altura);
			}
			if(altura > 1.73)
			{
				printf("\nMulher Alta! nacionalidade:%c sexo:%c altura:%.2f",nacionalidade,sexo,altura);
			}
		}
		
	}
	getch();
}



