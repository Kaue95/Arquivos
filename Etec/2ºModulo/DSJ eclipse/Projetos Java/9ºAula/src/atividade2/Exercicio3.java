package atividade2;

import java.text.DecimalFormat;

import javax.swing.JOptionPane;

public class Exercicio3 {

	public static void main(String[] args) {
		
		Double p;
		JOptionPane.showMessageDialog(null, "Esse programa recebe o valor de um produto e exibe 5 presta��es do mesmo produto.","Exercicio 3",-1);
		String x = JOptionPane.showInputDialog(null, "Digite o valor do produto: ","Exercicio 3",-1);
		Double produto = Double.parseDouble(x);
		DecimalFormat df = new DecimalFormat("0.00");
		p = produto/5;
		JOptionPane.showMessageDialog(null, "O valor total do produto �: R$" + df.format(produto)+ "\nOs valores das presta��es s�o:\n1�-> R$"+df.format(p)+ "\n2�-> R$"+df.format(p) + "\n3�-> R$"+df.format(p)+"\n4�-> R$"+df.format(p)+"\n5�-> R$"+df.format(p),"Exercicio 3",-1);
	}

}
