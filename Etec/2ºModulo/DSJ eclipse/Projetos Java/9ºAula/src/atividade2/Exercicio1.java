package atividade2;

import javax.swing.JOptionPane;

public class Exercicio1 {

	public static void main(String[] args) {
	
		//1.Receba um n�mero e mostre seu sucessor.
		
		JOptionPane.showMessageDialog(null, "Esse programa recebe um n�mero e mostra o seu sucessor!","Exercicio 1",-1);
		String x = JOptionPane.showInputDialog(null, "Digite um n�mero:","Exercicio 1",-1);
		int y = Integer.parseInt(x);
		
		y = y+1;
		
		JOptionPane.showMessageDialog(null, "O n�mero sucessor �: "+ y, "Exercicio 1", -1);
		
	}

}

