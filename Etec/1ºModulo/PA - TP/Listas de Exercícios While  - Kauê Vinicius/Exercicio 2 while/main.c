#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int valor=-1, numero;
	system("cls");
	setlocale(LC_ALL,"");
	printf("Esse programa imprime o maior número digitado.");
	printf("\nPara finalizar a digitalização, Digite 0.");
	while(numero!=0)
	{
		printf("\nDigite um número:");
		scanf("%d", &numero);
		if(numero > valor)
		{
			valor = numero;
		}
	}
	printf("O maior número digitado foi %d",valor);
	getch();
	
}
