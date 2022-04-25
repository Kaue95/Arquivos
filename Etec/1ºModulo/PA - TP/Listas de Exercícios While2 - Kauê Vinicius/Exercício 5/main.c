#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include "ControlesDaTela.cpp"
#include <math.h>
/*1.Desenvolva um programa que preencher um vetor com números inteiros de 10 a 20 (10 unidades);
 solicitar um número do teclado. Pesquisar se esse número existe no vetor. Se existir, imprimir em qual
posição do vetor. Se não existir, imprimir MSG que não existe.*/
//Desenvolvido por:Kaue Vinicius 
void main()
{
	int vetor[10], valor, i, achou=0;
	for (i=0;i<10;i++)
		scanf("%d", &vetor[i]);
		scanf("%d", &valor);
		printf(" %d ", vetor[i]);
		printf(" %d ", valor);
		
	for (i=0;i<10;i++){
		if (valor==vetor[i])
			achou=1;
	}
	if (achou)
		printf("O valor %d estÃ¡ no vetor.", valor);
	else
		printf("O valor %d nÃ£o estÃ¡ no vetor.", valor);
	return 0;
}
