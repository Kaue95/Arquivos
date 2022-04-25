import javax.swing.JOptionPane;

public class Vetor3 {
	public static void main(String[] args) {
		
		int[] vetor = new int[5];
		int i,total = 0;
		
		
		for(i=0;i<5;i++) {
			
		String x = JOptionPane.showInputDialog(null,"Digite algo para o "+ (i+1) + "ª valor:");
		vetor[i] = Integer.parseInt(x);
		
		total = vetor[0] + vetor[1]+ vetor[2] + vetor[3]+ vetor[4];
		}
		
		JOptionPane.showMessageDialog(null, "O valor da soma dos vetores é: "+ total);
	}



}


