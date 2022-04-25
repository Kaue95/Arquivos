#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include "ControlesDaTela.cpp"
/*1.Desenvolva um programa que preenche um vetor com números inteiros de 10 a 20 (10 unidades);
 solicitar um número do teclado. Pesquisar se esse número existe no vetor. Se existir, imprimir em qual
posição do vetor. Se não existir, imprimir MSG que não existe.*/
//Desenvolvido por:Kaue Vinicius 
void main()
{
	int vet[10],x, i, num,z, cont=0,fefml=0, prox=0, gt=0;
	setlocale(LC_ALL,"");
	Cor(0x0F);
	system("cls");
	Sim:
	printf("Esse programa preenche os vetores com 10 unidades, números inteiros de 10 a 20, e o usuário digita um número onde \no programa verifica se contém no vetor!\n");
	srand(time(NULL));
	for(x=0;x<10;x++)
	{
		vet[x] = rand() %9+11;
		printf("\nPosição: %d | %d ",x+1, vet[x]); 
	}
	printf("\n\nDigite um número para análise: ");
	scanf("%d", &num);

		if(vet[0] == num)
		{
			Cor(0x0F);
			printf("\nO número %d digitado, está na posição %d do vetor!",num,x-9);
			fefml=1;
			prox=1;
		}
		if(vet[1] == num)
		{
			Cor(0x0F);
			printf("\nO número %d digitado, está na posição %d do vetor!",num,x-8);
			fefml=1;
			prox=1;
		}
		if(vet[2] == num)
		{
			Cor(0x0F);
			printf("\nO número %d digitado, está na posição %d do vetor!",num,x-7);
			fefml=1;
			prox=1;
		}
		if(vet[3] == num)
		{
			Cor(0x0F);
			printf("\nO número %d digitado, está na posição %d do vetor!",num,x-6);
			fefml=1;
			prox=1;
		}
		if(vet[4] == num)
		{
			Cor(0x0F);
			printf("\nO número %d digitado, está na posição %d do vetor!",num,x-5);
			fefml=1;
			prox=1;
		}
		if(vet[5] == num)
		{
			Cor(0x0F);
			printf("\nO número %d digitado, está na posição %d do vetor!",num,x-4);
			fefml=1;
			prox=1;
		}
		if(vet[6] == num)
		{
			Cor(0x0F);
			printf("\nO número %d digitado, está na posição %d do vetor!",num,x-3);
			fefml=1;
			prox=1;
		}
		if(vet[7] == num)
		{
			Cor(0x0F);
			printf("\nO número %d digitado, está na posição %d do vetor!",num,x-2);
			fefml=1;
			prox=1;
		}
		if(vet[8] == num)
		{
			Cor(0x0F);
			printf("\nO número %d digitado, está na posição %d do vetor!",num,x-1);
			fefml=1;
			prox=1;
		}
		if(vet[9] == num)
		{
			Cor(0x0F);
			printf("\nO número %d digitado, está na posição %d do vetor!",num,x);
			fefml=1;
			prox=1;
		}
		if(prox=1)
		{
			printf("\n\nDigite 0 para digitar um novo número ou 1 para fechar o programa.");
			scanf("%d",&z);
			if(z == 0)
			{
				system("cls");
				goto Sim;
				num=0;	
				vet[x]=0;
				x=0;
			}
			else
			{
				exit(1);
			}		
		}
		if(fefml!=1)
		{
			Cor(0x0F);
			printf("\nVocê digitou um número que não existe no vetor!");
			printf("\n\nDigite 0 para digitar um novo número ou 1 para fechar o programa.");
			scanf("%d",&z);
			if(z == 0)
			{
				system("cls");
				goto Sim;
				num=0;	
			}
			else
			{
				exit(1);
			}		
		}
		
		/*	-- Professor, olha eu tentei fazer dessa maneira por horas, mas não consegui,
			sempre dava erro nos vetores e afins, então eu fiz de uma forma mais longa,
			mostrado acima, pelo menos deu certo kkkkkk. -- 
		for(x=0;x<10;x++)
		{
		if(vet[x] == num)
		{
			printf("\nO número %d digitado, está na posição %d do vetor!",num,x+1);
			fefml=1;
		}							
	}*/
		
	/*	if(fefml!=1)              
		{
			printf("\nVocê digitou um número que não existe no vetor!");
			printf("\n\nDeseja digitar um novo número?");
			printf("\n\nDigite 0 para digitar um novo número ou 1 para fechar o programa.");
			scanf("%d",&z);
			if(z == 0)
			{
				system("cls");
				goto Sim;
				num=0;	
			}
			else
			{
				exit(1);
			}		
		}	*/
	
	getch();

}
