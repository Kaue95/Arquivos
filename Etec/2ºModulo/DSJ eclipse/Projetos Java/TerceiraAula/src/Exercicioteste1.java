import java.util.Scanner;

public class Exercicioteste1 {

		
	public static void main(String[] args) {
		
		
		Scanner grava = new Scanner(System.in);
		
		int menu=0,rg,cod;
		Double cpf;
		
		System.out.println("MENU\n1-Adicionar\n2-Alterar\n3-Excluir\n4-Sair");
		
		System.out.println("\n\nDigite um valor");
		menu = grava.nextInt();
		
		if(menu== 1) {
			System.out.println("\nDigite seu CPF:");
			cpf = grava.nextDouble();
			System.out.println("\nDigite seu RG:");
			rg = grava.nextInt();
			System.out.println("\nDigite seu Código de acesso:");
			cod = grava.nextInt();
		}else if(menu==2) {
			System.out.println("\nO sistema foi alterado com sucesso!");
		}else if(menu==3) {
			System.out.println("\nO sistema foi excluido com sucesso!");
		}else if(menu==4) {
			System.out.println("Saindo...");
			System.exit(0);
		}else {
			System.out.println("Você digitou um número não correspondente!\nReinicie o programa");
		}
	}

}
