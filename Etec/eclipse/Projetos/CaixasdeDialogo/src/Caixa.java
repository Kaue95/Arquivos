import javax.swing.JOptionPane;


public class Caixa {

	public static void main(String[] args) {
		
		
     String x = JOptionPane.showInputDialog(null, "Selecione a opção\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n5-Porcentagem\n6-Sair");
     int op = Integer.parseInt(x);
     

	}

}
