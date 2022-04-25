import java.util.Scanner;

public class Lista {

	public static void main(String[] args) {
		System.out.println("Listas de Exercicios.\n");
		
		Scanner grava = new Scanner(System.in);
		int op;
		
		do {
			System.out.println("Selecione o exercicio desejado:\n\n1- Imprima os números de 150 a 300\n2-Imprima a soma de 1 a 1000\n3-Imprima todos os multimos de 3 entre 1 e 100\n\nFeche o programa digitando 4");
			op = grava.nextInt();
			if(op==1) {
				Exercicios.ex1();
			}else if(op==2) {
				Exercicios.ex2();
			}else if(op==3) {
				Exercicios.ex3();
			}else if(op==4) {
				System.out.println("Fechando Calculadora...");
			}else {
				System.out.println("Opção Invalida");
			}
			}while(op != 4);
	}

}
