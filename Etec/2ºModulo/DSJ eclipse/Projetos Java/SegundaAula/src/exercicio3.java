import java.util.Scanner;

public class exercicio3 {

	public static void main(String[] args) {
	
		try (Scanner grava = new Scanner(System.in)) {
			int valor1, valor2, res1, res2, res3;
			double res4;
			
			System.out.println("Esse programa faz o calculo com as opera��es m�tematicas com dois valores!");
			
			System.out.println("\nDigite o 1� valor:");
			valor1 = grava.nextInt();
			
			System.out.println("\nDigite o 2� valor:");
			valor2 = grava.nextInt();
			
			res1 = valor1 + valor2;
			res2 = valor1 - valor2;
			res3 = valor1 * valor2;
			res4 = valor1 / valor2;
			
			System.out.println("\nO Resultado �:");
			System.out.println("\n\nSOMA: " + res1 + "\nSUBTRA��O: " + res2 + "\nMULTIPLICA��O: " + res3 + "\nDIVIS�O: " + res4);
		}
	}

}