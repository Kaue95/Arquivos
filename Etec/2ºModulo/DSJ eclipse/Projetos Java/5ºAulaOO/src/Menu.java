import java.util.Scanner;

public class Menu {

	public static void menu() {
		System.out.println("--------Calculadora--------");
		
		Scanner grava = new Scanner(System.in);
		int op;
		do {
		System.out.println("Selecione a opera��o desejada:\n1- Soma\n2-Subtra��o\n3-Multiplica��o\n4-Divis�o\n5-Sair");
		op = grava.nextInt();
		if(op==1) {
			operacoes.soma();
		}else if(op==2) {
			operacoes.sub();
		}else if(op==3) {
			operacoes.mult();
		}else if(op==4) {
			operacoes.div();
		}else if(op==5) {
			System.out.println("Fechando Calculadora...");
		}else {
			System.out.println("Op��o Invalida");
		}
		}while(op != 5);
	}
	
}
