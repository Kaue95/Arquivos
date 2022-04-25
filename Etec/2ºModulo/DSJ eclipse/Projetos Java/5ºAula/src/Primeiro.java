import java.util.Scanner;

public class Primeiro {

	public static void main(String[] args) {
		Scanner grava = new Scanner(System.in);	

		int x;
		System.out.println("ESSE PROGRAMA EXIBE OS NÚMEROS IMPARES ENTRE 100 E 200.\n\n");
		
		for( x = 101; x <200; x++) 
		{
			if(x%2 == 1) {
				System.out.println("= " + x + " =");
			}
		}
	}

}
