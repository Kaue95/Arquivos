import java.util.Scanner;

public class exercicio4 {

	public static void main(String[] args) {
	
		try (Scanner grava = new Scanner(System.in)) {
			int valor, x;
			
			System.out.println("Esse programa exibe a tabuada de acordo com o valor digitado:");
			System.out.println("Digite um valor");
			valor = grava.nextInt();
			
			
			for(x=1;x<=10;x++)
			{
				System.out.println(valor + " * " + x + " = " + (valor*x));
			}
		}
	}

}