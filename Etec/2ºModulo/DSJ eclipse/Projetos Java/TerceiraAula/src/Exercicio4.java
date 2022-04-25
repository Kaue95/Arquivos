import java.util.Scanner;

public class Exercicio4 {

		
	public static void main(String[] args) {
		
		
		Scanner grava = new Scanner(System.in);
		
		double vt=0.02,tf=0.06,imposto=0.07, dsc15=0.15;
		double res,resvt, restf,res15;
		int sala, resim;
		
		System.out.println("Esse programa faz o desconto de seu salário bruto!");
		System.out.println("\nDigite seu salário bruto: ");
		sala = grava.nextInt();
		
		res = sala * vt;
		resvt = res;
		sala = (int) (sala - res);
		
		res = sala  * tf;
		restf = res;
		sala = (int) (sala - res);
		
		res = sala  * imposto;
		resim = (int) res;
		sala = (int) (sala - res);
		
		if(sala > 1200) {
			res = sala * dsc15;
			res15 = res;
			sala = (int) (sala - res);
			System.out.println("\nSeu salário Liquido final é de R$ " + sala + ".\n\nTendo como descontos:\n\n2% de Vale Trasporte              -> R$ "+ resvt + "\n6% de Ticket Refeição             -> R$ " + restf + "\n7% de Imposto de renda            -> R$ " + resim + "\n15% pelo alto salário             -> R$ " + res15 + "");
		}else {
			System.out.println("\nSeu salário Liquido final é de R$ " + sala + ".\n\nTendo como descontos:\n\n2% de Vale Trasporte              -> R$ "+ resvt + "\n6% de Ticket Refeição             -> R$ " + restf + "\n7% de Imposto de renda            -> R$ " + resim);
		}
		
		
	}

}
