import java.util.Scanner;

public class exercicio1 {

	public static void main(String[] args) {
	
		try (Scanner grava = new Scanner(System.in)) {
			double md1,md2,md3,res, rest;
			String nome;
			
			System.out.println("Esse programa armazena as notas bimestrais e a exibe na tela.");
			
			System.out.println("\nDigite o nome do aluno: ");
			nome = grava.next();
			
			System.out.println("\nDigite a nota do primeiro bimestre:");
			md1 = grava.nextDouble();
			
			System.out.println("\nDigite a nota do segundo bimestre: ");
			md2 = grava.nextDouble();
			
			System.out.println("\nDigite a nota do terceiro bimestre: ");
			md3 = grava.nextDouble();
			
			res = md1 + md2 + md3;
			rest = res/3;
			
			System.out.println("\nO aluno " + nome + " teve a sua nota média de " + rest);
		}
	}

}
