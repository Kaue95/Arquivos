package atividade2;

import javax.swing.JOptionPane;

public class Exercicio1 {

	public static void main(String[] args) {
	
		//1.Receba um número e mostre seu sucessor.
		
		JOptionPane.showMessageDialog(null, "Esse programa recebe um número e mostra o seu sucessor!","Exercicio 1",-1);
		String x = JOptionPane.showInputDialog(null, "Digite um número:","Exercicio 1",-1);
		int y = Integer.parseInt(x);
		
		y = y+1;
		
		JOptionPane.showMessageDialog(null, "O número sucessor é: "+ y, "Exercicio 1", -1);
		
	}

}

