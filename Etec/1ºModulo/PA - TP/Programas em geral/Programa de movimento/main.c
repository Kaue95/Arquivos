#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 
int main(void){
    //vari�veis
    char c;//vari�vel para armazenar o valor da tecla pressionada
    
    //captura do valor da tecla
    printf("Aperte uma tecla em seu teclado: ");
    c=getch();
    
    //exibi��o do c�digo da tecla
    printf ("\n\nCodigo da tecla: %d\n\n", c);
    
    //exibi��o da tecla pressionada
    printf ("Codigo da tecla: %c\n\n", c);
    
    system("pause");
    return 0;
}
