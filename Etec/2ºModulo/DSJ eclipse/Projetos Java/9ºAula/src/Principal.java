import javax.swing.JOptionPane;

public class Principal {

	public static void main(String[] args) {
		
		JOptionPane.showMessageDialog(null,"Bem vindo!", "Calculadora",-1);
		
		String x = JOptionPane.showInputDialog(null, "Selecione a opera��o desejada:\n1- Soma\n2-Subtra��o\n3-Multiplica��o\n4-Divis�o\n5-Sair","Calculadora",-1);
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
