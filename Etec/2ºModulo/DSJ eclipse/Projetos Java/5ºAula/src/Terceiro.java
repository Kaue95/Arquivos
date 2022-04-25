import java.util.Scanner;

public class Terceiro {

	public static void main(String[] args) {
		Scanner grava = new Scanner(System.in);
		
		int valor =1 , total=0 , cont=0;
		double media=0;

		 do{

		 System.out.println("Digite a idade ou 0 para sair do programa");
		valor = grava.nextInt();
		total = total + valor;
		cont++;
		}while(valor != 0);
		cont--;
		media = total / cont;

		 System.out.println("A média de idade dos alunos é de " + media);
	}

}
