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
			System.out.println("\nEu t� quase desistindo de tudo, seri�o mesmo\nMas n�o desista, ou sei l�, desista.");
		}else if(menu==2) {
			System.out.println("\nDigite um valor para ser retirado 10% dele:");
			valor = grava.nextDouble();
			
			res = valor*0.1;
			
			System.out.println("\n\nO resultado de 10% desse valor �: " + res);
			
		}else if(menu==3) {
			System.out.println("\nSelecione uma Categoria: \n1-1 at� 10 anos\n2-11 at� 13 anos\n3-14 at� 17 anos\n4-acima de 18 anos");
			menu2 = grava.nextInt();
			if(menu2 == 1) {
				System.out.println("\n\nVoc� � Infantil!");
			}else if(menu2 == 2) {
				System.out.println("\n\nVoc� � Infanto-Juvenil!");
			}
			if(menu2 == 3) {
				System.out.println("\n\nVoc� � Pr�-Adolescente");
			}else if(menu2 == 4) {
				System.out.println("\n\nVoc� � Adulto!");
			}
		}else if(menu==4) {
			System.out.println("Saindo...");
		}else {
			System.out.println("Voc� digitou um n�mero n�o correspondente!\nReinicie o programa");
		}
	}

}
