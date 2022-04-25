#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "ControlesDaTela.cpp"
#include <locale.h>
void main()
{
	int camisa=0, tenis=0, calca=0, camiseta=0, meia=0, venda, x;
	float total=0;
	int qtcamisa=10, qttenis=6, qtcalca=4, qtcamiseta=3, qtmeia=7;
	setlocale(LC_ALL,"");
	Cor(0x09);
	system("cls");
	gotoxy(10,5);
	printf("Esse programa faz controle do estoque da loja!");	
	for(x=0;x<=29;x++)
	{
		Cor(0x0F);
		system("cls");
		gotoxy(10,5);
		printf("Esse programa faz controle de estoque da loja!");
		gotoxy(10,6);
		printf("Itens:");
		gotoxy(10,7);
		printf("Camisa   - código 1 - R$100.00 - quantidade %i",qtcamisa);
		gotoxy(10,8);
		printf("Tênis    - código 2 - R$540.00 - quantidade %i",qttenis);
		gotoxy(10,9);
		printf("Calça    - código 3 - R$ 90.00 - quantidade %i",qtcalca);
		gotoxy(10,10);
		printf("Camiseta - código 4 - R$ 30.00 - quantidade %i",qtcamiseta);
		gotoxy(10,11);
		printf("Meia     - código 5 - R$ 25.00 - quantidade %i",qtmeia);
		gotoxy(10,14);
		printf("Para finalizar  - Digite o código -99");
		gotoxy(10,13);
		printf("Para finalizar  - Digite o código:");
		scanf("%i", &venda);
		if(venda==1)
		{
			if(qtcamisa>0)
			{
				camisa++;
				qtcamisa--;
			}
			else
			{
				gotoxy(10,20);
				printf("Não é possivel vender, pois não tem estoque!");
				getch();
			}
		}
		
		if(venda==2)
		{
			if(qttenis>0)
			{	
			tenis++;
			qttenis--;
			}
			else
			{
				gotoxy(10,20);
				printf("Não é possivel vender, pois não tem estoque!");
				getch();
			}
		}
		if(venda==3)
		{
			if(qtcalca>0)
			{
				calca++;
				qtcalca--;
			}
			else
			{
				gotoxy(10,20);
				printf("Não é possivel vender, pois não tem estoque!");
				getch();
			}
		}
		if(venda==4)
		{
			if(qtcamiseta>0)
			{
			camiseta++;
			qtcamiseta--;
			}
			else
			{
				gotoxy(10,20);
				printf("Não é possivel vender, pois não tem estoque!");
				getch();
			}
		}
		if(venda==5)
		{
			if(qtmeia>0)
			{
				meia++;
				qtmeia--;
			}
			else
			{
				gotoxy(10,20);
				printf("Não é possivel vender, pois não tem estoque!");
				getch();
			}
		}
		if(venda == -99)
		{
			break;
		}
	}
	Cor(0x70);
	system("cls");
	gotoxy(15,10);
	printf("Foram Vendidos:");
	gotoxy(15,11);
	printf("A quantidade de camisas vendidas foram %i! ", camisa);
	gotoxy(15,12);
	printf("A quantidade de tênis vendidas foram %i! ", tenis);
	gotoxy(15,13);
	printf("A quantidade de calças vendidas foram %i! ", calca);
	gotoxy(15,14);
	printf("A quantidade de camisetas vendidas foram %i! ", camiseta);
	gotoxy(15,15);
	printf("A quantidade de meias vendidas foram %i! ", meia);
	total = (camisa*100)+(tenis*540)+(calca*90)+(camiseta*30)+(meia*25);
	gotoxy(15,16);
	printf("O valor total de vendas foi R$%.2f! ",total);
	
	getch();
}
