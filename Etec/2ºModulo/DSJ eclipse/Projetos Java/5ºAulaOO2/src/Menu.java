import java.util.Scanner;

public class Menu {

	public static void menu() {
		System.out.println("Mensagem 1");
		
		Scanner grava = new Scanner(System.in);
		int op;
		System.out.println("Selecione a opera��o desejada:\n1- Soma\n2-Subtra��o\n3-Multiplica��o\n4-Divis�o");
		op = grava.nextInt();
	}
	
}
