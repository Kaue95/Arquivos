import java.util.Scanner;

public class Exercicioteste2 {

		
	public static void main(String[] args) {
		
		
		Scanner grava = new Scanner(System.in);
		double valor, res;
		int menu=0,menu2=0;
		
		
		
		System.out.println("=====MENU=====\n1-Veja a Mensagem\n2-Tire 10% desse valorr\n3-Selecione a Categoria\n4-Sair");
		
		System.out.println("\n\nDigite um valor");
		menu = grava.nextInt();
		
		if(menu== 1) {
			System.out.println("\nEu tô quase desistindo de tudo, serião mesmo\nMas não desista, ou sei lá, desista.");
		}else if(menu==2) {
			System.out.println("\nDigite um valor para ser retirado 10% dele:");
			valor = grava.nextDouble();
			
			res = valor*0.1;
			
			System.out.println("\n\nO resultado de 10% desse valor é: " + res);
			
		}else if(menu==3) {
			System.out.println("\nSelecione uma Categoria: \n1-1 até 10 anos\n2-11 até 13 anos\n3-14 até 17 anos\n4-acima de 18 anos");
			menu2 = grava.nextInt();
			if(menu2 == 1) {
				System.out.println("\n\nVocê é Infantil!");
			}else if(menu2 == 2) {
				System.out.println("\n\nVocê é Infanto-Juvenil!");
			}
			if(menu2 == 3) {
				System.out.println("\n\nVocê é Pré-Adolescente");
			}else if(menu2 == 4) {
				System.out.println("\n\nVocê é Adulto!");
			}
		}else if(menu==4) {
			System.out.println("Saindo...");
		}else {
			System.out.println("Você digitou um número não correspondente!\nReinicie o programa");
		}
	}

}
