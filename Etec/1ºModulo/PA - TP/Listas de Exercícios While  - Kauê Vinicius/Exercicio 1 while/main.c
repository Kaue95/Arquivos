#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
void main()
{
	int id21=0,id50=0,idade=0;
	setlocale(LC_ALL,"");
	Cor(0x09);
	system("cls");
	printf("Esse programa verifica a quantidade de pessoas maiores que 50 anos e menores que 21.");
	printf("\nPara sair Digite: -99");
	while(idade!=-99)
	{
		printf("\nDigite a idade da pessoa:");
		scanf("%d", &idade);
		if(idade>=50)
		{
			id50++;
		}
		if(idade<=21)
		{
			id21++;
		}
	}
	printf("\nPessoas com mais de 50 anos são: %d",id50);
	printf("\nPessoas com menos de 21 anos são: %d",id21);
	getch();
}
