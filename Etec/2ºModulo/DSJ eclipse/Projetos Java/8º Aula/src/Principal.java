import javax.swing.JOptionPane;

public class Principal {

	public static void main(String[] args) {
	
		
		JOptionPane.showMessageDialog(null,"Bem vindo!", "Soma de Médias Bimestrais",-1);
	
		String nome = JOptionPane.showInputDialog(null, "Digite o Nome do Aluno");
		
		String x = JOptionPane.showInputDialog(null, "Digite a Nota do 1ºBimestre:");
	
		Double nota1 = Double.parseDouble(x);
		
		x = JOptionPane.showInputDialog(null, "Digite a Nota do 2ºBimestre:");
		
		Double nota2 = Double.parseDouble(x);
		
		x = JOptionPane.showInputDialog(null, "Digite a Nota do 3ºBimestre:");
		
		Double nota3 = Double.parseDouble(x);
		
		x = JOptionPane.showInputDialog(null, "Digite a Nota do 4ºBimestre:");
		
		Double nota4 = Double.parseDouble(x);
		
		JOptionPane.showMessageDialog(null, "O aluno "+ nome +" teve a notá media de "+ ((nota1+nota2+nota3+nota4)/4));
		
	}

}
