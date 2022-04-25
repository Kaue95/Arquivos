#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include "ControlesDaTela.cpp"
/*7. Faça um programa que, para um número indeterminado de pessoas: leia a idade de cada uma,
 sendo que a idade 0 (zero) indica o fim da leitura e não deve ser considerada. A seguir calcule:
o o número de pessoas; o a idade média do grupo; o a menor idade e a maior idade.*/
//Desenvolvido por: Kaue Vinicius da Silva Sousa
//Data: 24/05/2021
int main ()
{
    int idade, pessoas=0, pn, sn, menor;
    float media;
    setlocale(LC_ALL,"");
    system("cls");
    Cor(0x0F);
    printf("\nEsse programa faz a média da idade de pessoas!");
    printf("\nPara interromper o digito de pessoas -> Digite '0' ");
    printf ("\nDigite a idade de uma pessoa: ");
    scanf  ("%d", &idade);  
    while (idade!=0)
	{
        pessoas = pessoas + 1;
        media = idade + media;
        printf ("\nDigite a idade de uma pessoa: ");
        scanf  ("%d", &idade);
        if (pn>sn)
		{
            menor = sn;
        } 
		else if(sn>pn)
		{
            menor = pn;  
        }
        
    }
    
    media = media / pessoas;
    printf ("\nNumero de pessoas: %d\n", pessoas);
    printf ("\nMedia: %f\n", media);
    
    }
