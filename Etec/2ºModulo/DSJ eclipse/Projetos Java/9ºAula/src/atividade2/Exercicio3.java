package atividade2;

import java.text.DecimalFormat;

import javax.swing.JOptionPane;

public class Exercicio3 {

	public static void main(String[] args) {
		
		Double p;
		JOptionPane.showMessageDialog(null, "Esse programa recebe o valor de um produto e exibe 5 prestações do mesmo produto.","Exercicio 3",-1);
		String x = JOptionPane.showInputDialog(null, "Digite o valor do produto: ","Exercicio 3",-1);
		Double produto = Double.parseDouble(x);
		DecimalFormat df = new DecimalFormat("0.00");
		p = produto/5;
		JOptionPane.showMessageDialog(null, "O valor total do produto é: R$" + df.format(produto)+ "\nOs valores das prestações são:\n1º-> R$"+df.format(p)+ "\n2º-> R$"+df.format(p) + "\n3º-> R$"+df.format(p)+"\n4º-> R$"+df.format(p)+"\n5º-> R$"+df.format(p),"Exercicio 3",-1);
	}

}
