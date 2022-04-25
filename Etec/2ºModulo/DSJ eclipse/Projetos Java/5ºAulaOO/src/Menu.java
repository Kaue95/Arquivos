import java.util.Scanner;

public class Menu {

	public static void menu() {
		System.out.println("--------Calculadora--------");
		
		Scanner grava = new Scanner(System.in);
		int op;
		do {
		System.out.println("Selecione a operação desejada:\n1- Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n5-Sair");
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
			System.out.println("Opção Invalida");
		}
		}while(op != 5);
	}
	
}
