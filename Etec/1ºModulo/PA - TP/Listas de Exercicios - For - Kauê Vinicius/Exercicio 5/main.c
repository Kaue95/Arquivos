#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void main()
{
  float habA = 80000 , habB = 200000;
    int tempoAno = 0,tempoMes = 0;

    do{
            habA = habA + (0.03 * habA);
            habB = habB + (0.015 * habB);
            tempoMes = tempoMes +1;
            if (tempoMes == 12)
			{
                tempoAno = tempoAno + 1;
                tempoMes = 0;
            }

    }while(habA < habB);

    printf("HabitantesA: %6.0f \n",habA);
    printf("HabitantesB: %6.0f \n",habB);
    printf("Foi nescessario %d Ano(s) e %d Meses para que os HabitantesA ultrapassassem os HabitantesB!! \n",tempoAno, tempoMes);

	getch();
	
}
