#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <locale.h>
void main()
{
	int val[6], sort[6], prim, seg, x, aux, count=0, count1=0, mega=0,jog=9;
	srand(time(NULL));
	setlocale(LC_ALL,"");
	printf("Esse programa faz jogo da MegaSena.\n");
	for(x=0;x<6;x++)
	{
		sort[x]=rand() % 60+1;
	//	printf(" %d ",sort[x]);
	}
	for(prim=0;prim<5;prim++)
	{
		for(seg=prim+1;seg<6;seg++)
		{
			if(sort[prim]>sort[seg])
			{
				aux = sort[prim];
				sort[prim]=sort[seg];
				sort[seg]=aux;
			}
		}
	}
/*	printf("\nOrdenado.\n");
	for(x=0;x<6;x++)
	{
		printf(" %d ",sort[x]);
	}*/
	novo:
	for(prim=0;prim<5;prim++)
	{
		for(seg=prim+1;seg<6;seg++)
		{
			if(sort[prim]==sort[seg])
			{
				sort[prim]=rand() % 60+1;
			}
			else
			{
				count++;
			}
		}
	}
	if(count < 15)
	{
		count=0;
		goto novo;
	}
//	printf("\nSem repeti��o\n");
	for(prim=0;prim<5;prim++)
	{
		for(seg=prim+1;seg<6;seg++)
		{
			if(sort[prim]>sort[seg])
			{
				aux = sort[prim];
				sort[prim]=sort[seg];
				sort[seg]=aux;
			}
		}
	}
/*	for(x=0;x<6;x++)
	{
		printf(" %d ",sort[x]);
	}*/
	printf("\nSeu jogo:");
	jogo:
	jog++;
	for(x=0;x<6;x++)
	{
		printf("\nO seu %d� valor do jogo:",x+1);
		scanf("%d", &val[x]);
	}
	novojogo:
	for(prim=0;prim<5;prim++)
	{
		for(seg=prim+1;seg<6;seg++)
		{
			if(val[prim]==val[seg])
			{
				printf("\nVoc� jogou n�mero repetido!");
				printf("\nJogue novamente a posi��o %d:",seg);
				scanf("%d", &val[seg]);
			}
			else
			{
				count1++;
			}
		}
	}
	if(count1 < 15)
	{
		count1=0;
		goto novojogo;
	}
	for(prim=0;prim<5;prim++)
	{
		for(seg=prim+1;seg<6;seg++)
		{
			if(val[prim]>val[seg])
			{
				aux = val[prim];
				val[prim]=val[seg];
				val[seg]=aux;
			}
		}
	}
/*	printf("\nJogado  Verificado.\n");
	for(x=0;x<6;x++)
	{
		printf(" %d ",val[x]);
	}*/
	for(prim=0;prim<6;prim++)
	{
		for(seg=0;seg<6;seg++)
		{
			if(val[prim]==sort[seg])
			{
				mega++;
			}
		}
	}
	if(mega==6)
	{
		printf("\nParab�ns voc� � um novo milionario!!!");
	}
	if(mega==5)
	{
		printf("\nParab�ns voc� acertou na quina!!!");
	}
	if(mega==4)
	{
		printf("\nParab�ns voc� acertou na quadra!!!");
	}
	if(mega<4)
	{
		printf("\nVoc� n�o ganhou, acertou %d numero(s)!!!",mega);
	}
	getch();
	count=0; 
	count1=0; 
	mega=0;
	system("cls");
	printf("Seu %d� jogo",jog);
	if(jog > 10)
	{
		system("cls");
		printf("Voc� jogou 10 jogos j�, ent�o bye bye!");
		exit(0);
	}
	goto jogo;
	getch();
}
