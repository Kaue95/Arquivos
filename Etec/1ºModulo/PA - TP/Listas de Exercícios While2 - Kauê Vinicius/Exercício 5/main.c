#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include "ControlesDaTela.cpp"
#include <math.h>
/*1.Desenvolva um programa que preencher um vetor com n�meros inteiros de 10 a 20 (10 unidades);
 solicitar um n�mero do teclado. Pesquisar se esse n�mero existe no vetor. Se existir, imprimir em qual
posi��o do vetor. Se n�o existir, imprimir MSG que n�o existe.*/
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
		printf("O valor %d está no vetor.", valor);
	else
		printf("O valor %d não está no vetor.", valor);
	return 0;
}
