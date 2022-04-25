import javax.swing.JOptionPane;

public class Vetor1 {

	public static void main(String[] args) {
	
		String[] vetor = new String[7];
		int i;
		String total = "";
		
		for(i=0;i<7;i++) {
			
		vetor[i] = JOptionPane.showInputDialog(null,"Digite algo para o "+ (i+1) + "ª valor");
	
		total = total + vetor[i];
		}
	
		JOptionPane.showMessageDialog(null, total);
	}

}
