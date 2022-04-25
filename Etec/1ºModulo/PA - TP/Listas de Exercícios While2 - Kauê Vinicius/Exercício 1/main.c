#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
/*1. Leia várias idades e calcule a média entre as idades 
(usar uma variável para idade), para encerrar o programa use o número -99. */
// Desenvolvido por Kaue Vinicius da Silva Sousa
// 04-05-2021
void main()
{
	int idade, acumIdade=0, x=0;
	float media;
	setlocale(LC_ALL,"");
	Cor(0x09);
	system("cls");
	printf("Esse programa calcula a média de idades das pessoas registradas!");
	printf("\nPara sair digite -99.");
	while(idade!=-99)
	{
		printf("\nDigite a idade da pessoa: ");
		fflush(stdin);
		scanf("%i", &idade);
		if(idade != -99)
		{
		acumIdade = acumIdade + idade;
		x++;
		}
	}
	media = acumIdade / x;
	printf("\nO total de idade é %i!", idade);
	printf("\nForam inseridas no sistema %i!", x);
	printf("\nA média de idade é %.2f!", media);
	getch();	
}
