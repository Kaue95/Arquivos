import javax.swing.JOptionPane;

public class Vetor2 {

	public static void main(String[] args) {
		
		int[] vetor = new int[8];
		int i;
		String total = "";
		
		for(i=0;i<8;i++) {
			
		String x = JOptionPane.showInputDialog(null,"Digite algo para o "+ (i+1) + "ª valor");
		vetor[i] = Integer.parseInt(x);
		
		total = total + vetor[i] + " | ";
		}
		
		JOptionPane.showMessageDialog(null, total);
	}



}


