#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
void main()
{
	int numero, x, sair;
	setlocale(LC_ALL,"");
	for(;;)
	{
		
		Cor(0x09);
		printf("Esse programa imprime a tabuada do 1 ao 10 de acordo com o número digitado pelo usuário.");
		gotoxy(0,1);
		printf("Digite um número: ");
		scanf("%d", &numero);
			for(x=0;x<=10;x++)
			{
				gotoxy(25,x+3);
				printf("%d * %d = %2d",numero, x,x*numero);
				gotoxy(0,16);
				printf("Pressione ENTER para digitar um novo número.");
				getch();
				system("cls");
	}
	getch();	
}
