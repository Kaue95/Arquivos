import javax.swing.JOptionPane;

public class Principal {

	public static void main(String[] args) {
		
		JOptionPane.showMessageDialog(null,"Bem vindo!", "Calculadora",-1);
		
		String x = JOptionPane.showInputDialog(null, "Selecione a operação desejada:\n1- Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n5-Sair","Calculadora",-1);
		int select = Integer.parseInt(x);
		if(select == 1 ) {
			operacoes.soma();
		}else if(select == 2) {
			operacoes.sub();
		}else if(select == 3) {
			operacoes.mult();
		}else if(select == 4) {
			operacoes.div();
		}else if(select >= 5) {
			JOptionPane.showMessageDialog(null, "Saindo...");
		}
		
	}

}
