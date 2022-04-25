import java.util.Scanner;

public class Menu {

	public static void menu() {
		System.out.println("Mensagem 1");
		
		Scanner grava = new Scanner(System.in);
		int op;
		System.out.println("Selecione a operação desejada:\n1- Soma\n2-Subtração\n3-Multiplicação\n4-Divisão");
		op = grava.nextInt();
	}
	
}
