#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include "ControlesDaTela.cpp"
/*4. Fa�a um programa que sorteia um n�mero entre 10 e 20. Se a pessoa digitar um n�mero diferente,
 mostrar a mensagem "entrada inv�lida" e solicitar o n�mero novamente. Se digitar correto mostrar o n�mero,
 mostrar �Entrada correta� e finalizar o programa.*/
//Desenvolvido por Kaue Vinicius da Silva Sousa
// 04-05-2021
void main()
{
	int n, sorteio, x=0;
	setlocale(LC_ALL,"");
	srand(time(NULL));
	Cor(0x09);
	system("cls");
	printf("Esse programa sorteia um n�mero entre 10 e 20 e verifica se o usuario acertou!");
	sorteio = rand() %9 + 11;
	while(x != 1)
	{
		printf("\nDigite um n�mero:");
		fflush(stdin);
		scanf("%i", &n);
		if(n == sorteio)
		{
			x=1;//flag - bandeira
		}
		else
		{
			printf("\nEntrada Inv�lida");
		}
	}
	printf("\nO n�mero sorteado foi %i",sorteio);
	printf("\nEntrada correta");	
	getch();
}
