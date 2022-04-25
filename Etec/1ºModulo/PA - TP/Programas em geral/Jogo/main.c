#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "mold.cpp"
#include <windows.h>
#include <locale.h>

void main()
{
	int tecla=0, pos=60, tiro, x,y, tela[120][30], ponto=0, inimigo=0, xant=0, yant=0;
	int vida=3;
	//fase 3
	int i = 0, j = 0, acertos = 0, aux=0, aux2=0;
	char c;
	int numeros[5];
	int respostas[5];
	//tava dando erro lá embaixo
	setlocale(LC_ALL," ");
	DesligaCursor();
	system("cls");
	moldura();
	Cor(0xF9);
	gotoxy(pos,26);
	printf("A");
	gotoxy(pos-1,27);
	printf("\xC9 \xBB");
	gotoxy(2,28);
	printf("Pontos = %d",ponto);
	gotoxy(15,28);
	printf("\Inimigos: %02d",inimigo);
	gotoxy(30,28);
	printf("\Vidas: %02d",vida);
	
	//fase 1
	while(ponto<5)
	{
		srand(time(NULL));
		if(kbhit())
		{
			tecla = getch();
			gotoxy(pos,26);
			printf(" ");
			gotoxy(pos-1,27);
			printf("   ");
			printf(" ");
			if(tecla == 77)
			{
				if(pos<116)
				{
					pos++;
				}
			}
			if(tecla == 75)
			{
				if(pos>2)
				{
					pos--;
				}
			}
			gotoxy(pos,26);
			printf("A");
			gotoxy(pos-1,27);
			printf("\xC9 \xBB");
			if(tecla==32)
			{
				for(tiro=25;tiro>=1;tiro--)
				{
					gotoxy(pos,tiro);
					printf("^");
					Sleep(30);
					gotoxy(pos,tiro);
					printf(" ");	
					if(tela[pos][tiro]==1)
					{
						ponto++;
						gotoxy(2,28);
						printf("Pontos = %02d",ponto);
						tela[pos][tiro]=0;
						break;	
					}			
				}
			}
		}
		if(!kbhit())
		{
			x=rand() % 110+5;
			y=rand() % 20+1;	
			if(x != xant || y != yant)	
			{	
				gotoxy(x,y);
				printf("%c",01);
				tela[x][y]=1;
				inimigo++;	
				gotoxy(15,28);
				printf("\Inimigos: %02d",inimigo);
				xant = x;
				yant = y;
				if(inimigo % 5 == 0 && inimigo!=0)
				{
					vida--;
					gotoxy(30,28);
					printf("\Vidas: %02d",vida);
					if(vida < 0)
					{
						system("cls");
						moldura();
						gotoxy(50,15);
						printf("Game Over!!!");
						Sleep(2000);
						getch();
						exit(1);
					}
				}
			}
		}
	}
	//fase 2	
	gotoxy(pos,26);
	printf("A");
	gotoxy(pos-1,27);
	printf("\xC9 \xBB");
	gotoxy(2,28);
	printf("Pontos = %d",ponto);
	gotoxy(15,28);
	printf("\Inimigos: %02d",inimigo);
	gotoxy(30,28);
	printf("\Vidas: %02d",vida);
	tecla=0, pos=60, tiro, x,y, tela[120][30], ponto=0, inimigo=0, xant=0, yant=0, vida=3;
	system("cls");
	gotoxy(50,15);
	printf("Bem vindo ao segundo Mundo!!!");
	getch();
	system("cls");
	
	Cor(0xFC);
	system("cls");
	moldura();
	while(ponto<10)
	{
		srand(time(NULL));
		if(kbhit())
		{
			tecla = getch();
			gotoxy(pos,26);
			printf(" ");
			gotoxy(pos-1,27);
			printf("   ");
			printf(" ");
			if(tecla == 77)
			{
				if(pos<116)
				{
					pos++;
				}
			}
			if(tecla == 75)
			{
				if(pos>2)
				{
					pos--;
				}
			}
			gotoxy(pos,26);
			printf("A");
			gotoxy(pos-1,27);
			printf("\xC9 \xBB");
			if(tecla==32)
			{
				for(tiro=25;tiro>=1;tiro--)
				{
					gotoxy(pos,tiro);
					printf("^");
					Sleep(30);
					gotoxy(pos,tiro);
					printf(" ");	
					if(tela[pos][tiro]==1)
					{
						ponto++;
						gotoxy(2,28);
						printf("Pontos = %02d",ponto);
						tela[pos][tiro]=0;
						break;	
					}			
				}
			}
		}
		if(!kbhit())
		{
			x=rand() % 110+5;
			y=rand() % 20+1;	
			if(x != xant || y != yant)	
			{	
				gotoxy(x,y);
				printf("%c",01);
				tela[x][y]=1;
				inimigo++;	
				gotoxy(15,28);
				printf("\Inimigos: %02d",inimigo);
				xant = x;
				yant = y;
				if(inimigo % 5 == 0 && inimigo!=0)
				{
					vida--;
					gotoxy(30,28);
					printf("\Vidas: %02d",vida);
					if(vida < 0)
					{
						system("cls");
						moldura();
						gotoxy(50,15);
						printf("Game Over!!!");
						Sleep(2000);
						getch();
						goto fase3;
					}
				}
			}
		}
	}	


//fase 3 - jogo 

//	int i = 0, j = 0, acertos = 0, aux=0, aux2=0;
	//char c;
//	int numeros[5];
//	int respostas[5];
	fase3:
	system("cls");
	moldura();
	Cor(0xF5);
	gotoxy(50,5);
	printf("Jogo da memoria simples");
	srand(time(NULL));
	gotoxy(30,11);
	printf ("Este programa ira gerar 5 numeros aleatorios entre 1 e 30.");
	gotoxy(30,13);
	printf ("Voce deve decorar os numeros exibidos em 5 segundos e depois");
	gotoxy(30,14);
	printf("escreve-los na ordem em que foram exibidos.");
	gotoxy(30,16);
	printf ("Pressione ENTER para iniciar");
	do{
	    c = getch();
	    
	}while(c != 13);
	    
	for (i=0;i<5;i++)
	{
		numeros[i] = (rand() % 30)+1;
	}
	j=5;
    
	do{
    system ("cls");
    moldura();
	Cor(0xF5);
    gotoxy(50,11);
    printf ("Decore os numeros abaixo em %d", j);
    j--;
    aux=13;
    aux2=50;
    for (i=0;i<5;i++)
	{
		gotoxy(60,aux);
        printf (" -> %d <-", numeros[i]);
        aux++;
    }
    Sleep (1000);
	}while (j>0);
	system ("cls");
	moldura();
	Cor(0xF5);
    for (i=0;i<5;i++)
	{
		gotoxy(50,11);
    	printf ("Informe os numeros que foram exibidos");
		gotoxy(50,13);
        printf ("%d -> numero: ", i+1);
        scanf ("%d", &respostas[i]);
        system("cls");
        moldura();
        Cor(0xF5);
        if (respostas[i]==numeros[i])
		{
            acertos++;
        }
    
    }
    if (acertos==5)
	{
		system("cls");
    	moldura();
    	Cor(0xF5);
    	gotoxy(50,10);
    	printf ("Parabens!");
		gotoxy(50,11);
        printf ("Sua memoria foi muito boa.");
        gotoxy(50,12);
        printf ("Veja os numeros exibidos:");
        aux=13;
        for (i=0;i<5;i++)
		{
			gotoxy(50,aux);
            printf ("-> %d <-", numeros[i]);
            aux++;
           
        }
        getch();
    }
    else
    {
    	system("cls");
    	moldura();
    	Cor(0xF5);
    	gotoxy(50,10);
    	printf("Que pena!");
    	gotoxy(40,11);
        printf ("Sua memoria nao foi muito boa.");
        gotoxy(40,12);
        printf ("Veja os numeros exibidos:");
        aux=14;
		for (i=0;i<5;i++)
		{
			gotoxy(50,aux);
            printf ("-> %d <-", numeros[i]);
        	aux++;
        }
    }
    getch();
    system("cls");
	moldura();
	Cor(0xF5);
	gotoxy(50,15);
	printf("Fim de jogo!!!");
	Sleep(2000);
	getch();
	exit(1);
}

