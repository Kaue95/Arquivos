#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "ControlesDaTela.cpp"
void main()
{
	float a = 80000, b = 200000;
	int ano=0, mes=0;
	setlocale(LC_ALL,"");
	Cor(0x0F);
	system("cls");
	printf("Esse programa calcula o número de anos necessários para que a população do pais A que obtem de oitenta mil habitantes");
	printf("\nultrapasse ou iguale a população do país B que obtem de duzentos mil habitantes.");
	gotoxy(5,5);
	printf("\nLevando em conta a taxa de crescimento de 1.5 e 3 em porcertagem de ambos.");
	do
	{
        a = a + (0.03 * a);
        b = b + (0.015 * b);
        mes = mes +1;
        if (mes == 12)
		{
            if(ano = ano + 1)
            {
            	mes = 0;
        	}
    	}
    }
	while(a < b);
	{
		gotoxy(25,15);
		printf("\nHabitantesA: %6.0f \n",a);
	    printf("\nHabitantesB: %6.0f \n",b);
	    printf("\nAnos necessário: %d",ano);
	}
	getch();
}
