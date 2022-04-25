import java.util.Scanner;

public class ExercicioIMC {

	public static void main(String[] args) {
		
		Scanner grava = new Scanner(System.in);
		double altura, peso, resaltura,IMC;
		
		System.out.println("Esse programa faz o calculo de IMC de uma pessoa \ne exibe a categoria em que ela se encontra!");
		System.out.println("\nDigite seu peso:");
		peso = grava.nextDouble();
		System.out.println("\nDigite sua altura:");
		altura = grava.nextDouble();
		
		resaltura = altura * altura;
		IMC = peso / resaltura;
		
		if(IMC < 18.5) {
			System.out.println("Seu IMC é de "+ IMC + ".\nVocê está Abaixo do peso.");
		}else if(IMC < 24.9) {
			System.out.println("Seu IMC é de "+ IMC + ".\nVocê está no peso normal. ");
		}else if(IMC < 29.9) {
			System.out.println("Seu IMC é de "+ IMC + ".\nVocê está na categoria de Sobrepeso.");
		}else if(IMC < 34.9) {
			System.out.println("Seu IMC é de "+ IMC + ".\nVocê está na categoria de Obesidade leve.");	
		}else if(IMC < 39.9) {
			System.out.println("Seu IMC é de "+ IMC + ".\nVocê está na categoria de Obesidade moderada.");
		}else {
			System.out.println("Seu IMC é de "+ IMC + ".\nVocê está na categoria de Obesidade morbida.");
		}
	}

}
