#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 
int main(void){
    //variáveis
    char c;//variável para armazenar o valor da tecla pressionada
    
    //captura do valor da tecla
    printf("Aperte uma tecla em seu teclado: ");
    c=getch();
    
    //exibição do código da tecla
    printf ("\n\nCodigo da tecla: %d\n\n", c);
    
    //exibição da tecla pressionada
    printf ("Codigo da tecla: %c\n\n", c);
    
    system("pause");
    return 0;
}
