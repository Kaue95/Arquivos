import java.util.Scanner;

public class Quarto {

	public static void main(String[] args) {
		int quant;

		Scanner grava = new Scanner(System.in);

		System.out.println("Digite quantas vezes a mensagem deve aparecer");
		quant = grava.nextInt();

		for(int i = 0 ; i <= quant ; i++){

		System.out.println("Boa noite");

		}

	}

}
