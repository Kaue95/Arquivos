#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int valor=-1, numero;
	system("cls");
	setlocale(LC_ALL,"");
	printf("Esse programa imprime o maior n�mero digitado.");
	printf("\nPara finalizar a digitaliza��o, Digite 0.");
	while(numero!=0)
	{
		printf("\nDigite um n�mero:");
		scanf("%d", &numero);
		if(numero > valor)
		{
			valor = numero;
		}
	}
	printf("O maior n�mero digitado foi %d",valor);
	getch();
	
}
