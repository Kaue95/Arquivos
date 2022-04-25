import java.util.Scanner;

public class Exercicio3 {

		
	public static void main(String[] args) {
		
		
		Scanner grava = new Scanner(System.in);
		
		int velp, velc, res;
		
		
		
		System.out.println("Esse programa informa a multa a ser paga pelo excesso de velocidade em um carro!");
		System.out.println("\n\nDigite a velocidade permitida na via:");
		velp = grava.nextInt();		
		System.out.println("\nDigite a velocidade do carro no momento:");
		velc = grava.nextInt();
		
		res = velc - velp;
		if(res <= 0) {
			System.out.println("\nEstá dentro do limite permitido!");
		}
		if(res <= 10) {
			System.out.println("\nMULTA DE R$80,00!!\nVocê está "+ res + " KM/h acima da velocidade permitida.");
		}else if(res < 40) {
			System.out.println("\nMULTA DE R$120,00!!\nVocê está "+ res + " KM/h acima da velocidade permitida.");
		}else {
			System.out.println("\nMULTA DE R$200,00!!\nVocê está "+ res + " KM/h acima da velocidade permitida.");
		}
		
		
	}

}
