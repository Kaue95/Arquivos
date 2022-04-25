import java.util.Scanner;

public class operacoes {
	
	static double a=0,b=0,c=0;
	static Scanner grava = new Scanner(System.in);
	
	
	public static void soma() {
		System.out.println("Digite o primeiro valor");
		a = grava.nextDouble();
		
		System.out.println("Digite o segundo valor");
		b = grava.nextDouble();
		
		System.out.println("O resultado de " + a + " + " + b + " = " + (a+b) + "\n");
		
	}
	
	public static void sub() {
		System.out.println("Digite o primeiro valor");
		a = grava.nextDouble();
		
		System.out.println("Digite o segundo valor");
		b = grava.nextDouble();
		
		System.out.println("O resultado de " + a + " - " + b + " = " + (a-b) + "\n" );
		
	}
	
	public static void mult() {
		System.out.println("Digite o primeiro valor");
		a = grava.nextDouble();
		
		System.out.println("Digite o segundo valor");
		b = grava.nextDouble();
		
		System.out.println("O resultado de " + a + " * " + b + " = " + (a*b) + "\n");
		
	}
	public static void div() {
		System.out.println("Digite o primeiro valor");
		a = grava.nextDouble();
		
		System.out.println("Digite o segundo valor");
		b = grava.nextDouble();
		
		System.out.println("O resultado de " + a + " / " + b + " = " + (a/b) + "\n");
		
	}
}
