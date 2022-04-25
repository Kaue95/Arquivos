import java.util.Scanner;

public class exercicio2 {

	public static void main(String[] args) {
	
		try (Scanner grava = new Scanner(System.in)) {
			double valor,res;
			
			System.out.println("Esse programa faz o cálculo de um valor digitado e exibe 10%  do mesmo!!");
			
			System.out.println("\nDigite um valor em reais:");
			valor = grava.nextDouble();
			
			res = valor*0.1;
			
			System.out.println("O resultado de 10% desse valor é: " + res);
		}
		
		

	}

}
