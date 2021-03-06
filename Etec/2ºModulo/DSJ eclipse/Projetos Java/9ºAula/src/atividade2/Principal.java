package atividade2;

import java.text.DecimalFormat;

import javax.swing.JOptionPane;

public class Principal {

	public static void main(String[] args) {

		JOptionPane.showMessageDialog(null, "Calculo de IMC de uma pessoa.", "Bem vindo!", -1);
		
		String x = JOptionPane.showInputDialog(null,"Digite seu peso:", "IMC",-1);
		Double peso = Double.parseDouble(x);
		
		x = JOptionPane.showInputDialog(null,"Digite sua altura:", "IMC",-1);
		Double altura = Double.parseDouble(x);
		
		Double IMC;
		Double res;
		res = altura * altura;
		IMC = peso / res;
		DecimalFormat df = new DecimalFormat("0.00");
		
		if(IMC < 18.5) {
			JOptionPane.showMessageDialog(null, "Voc? est? abaixo do peso ideal. \nSeu IMC ? de: " + df.format(IMC),"IMC",-1);
		}else if(IMC >= 18.5 || IMC <= 24.9) {
			JOptionPane.showMessageDialog(null, "Parab?ns!\nVoc? est? em seu peso normal.\nSeu IMC ? de: " + df.format(IMC),"IMC",-1);
		}else if(IMC >=25 || IMC <= 29.9) {
			JOptionPane.showMessageDialog(null, "Voc? est? acima de seu peso.\nSeu IMC ? de: "+ df.format(IMC),"IMC",-1);
		}else if(IMC >= 30 || IMC <= 34.9) {
			JOptionPane.showMessageDialog(null, "Voc? se encontra com Obesidade de grau I.\nSeu IMC ? de: "+df.format(IMC),"IMC",-1);
		}else if(IMC >= 35 || IMC <= 39.9) {
			JOptionPane.showMessageDialog(null, "Voc? se encontra com Obesidade de grau II.\nSeu IMC ? de: "+df.format(IMC),"IMC",-1);
		}else if(IMC >= 40) {
			JOptionPane.showMessageDialog(null, "Voc? se encontra com Obesidade de grau III.\nSeu IMC ? de: "+df.format(IMC),"IMC",-1);
		}else{
			JOptionPane.showMessageDialog(null, "Valor Inv?lido!");
			
		}
		
	}
}
