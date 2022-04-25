import java.util.Scanner;

public class exercicio3 {

	public static void main(String[] args) {
	
		try (Scanner grava = new Scanner(System.in)) {
			int valor1, valor2, res1, res2, res3;
			double res4;
			
			System.out.println("Esse programa faz o calculo com as operações mátematicas com dois valores!");
			
			System.out.println("\nDigite o 1º valor:");
			valor1 = grava.nextInt();
			
			System.out.println("\nDigite o 2º valor:");
			valor2 = grava.nextInt();
			
			res1 = valor1 + valor2;
			res2 = valor1 - valor2;
			res3 = valor1 * valor2;
			res4 = valor1 / valor2;
			
			System.out.println("\nO Resultado é:");
			System.out.println("\n\nSOMA: " + res1 + "\nSUBTRAÇÃO: " + res2 + "\nMULTIPLICAÇÃO: " + res3 + "\nDIVISÃO: " + res4);
		}
	}

}