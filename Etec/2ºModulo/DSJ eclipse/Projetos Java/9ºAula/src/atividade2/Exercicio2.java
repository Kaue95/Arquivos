package atividade2;

import java.text.DecimalFormat;

import javax.swing.JOptionPane;

public class Exercicio2 {

	public static void main(String[] args) {
	
		JOptionPane.showMessageDialog(null, "Esse programa recebe um valor e exibe  o valor com rendimento ap�s um m�s.\nCom o juros da poupan�a em 0,70%.","Exercicio 2",-1);
		String x = JOptionPane.showInputDialog(null, "Digite um valor: ", "Exercicio 2", -1);
		Double valor = Double.parseDouble(x);
		Double taxa;
		Double total;
		DecimalFormat df = new DecimalFormat("0.00");
		taxa = valor * 0.70;
		total = valor + taxa;
		
		JOptionPane.showMessageDialog(null,"O valor de rendimento de um m�s � de: "+ df.format(taxa)+ "\nO valor em conjunto � de: "+ df.format(total), "Exercicio 2",-1);
	
	}

}
