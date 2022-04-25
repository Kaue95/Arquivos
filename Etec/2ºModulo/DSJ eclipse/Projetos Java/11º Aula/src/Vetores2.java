import javax.swing.JOptionPane;

public class Vetores2 {

	public static void main(String[] args) {
		int[] num = new int[3];
		int[] num2 = new int[3];
		int[] res = new int[3];
		
		JOptionPane.showMessageDialog(null, "Esse programa faz a multiplicação entre os vetores presentes!");
		for(int i=0;i<3;i++) {
		
			String x = JOptionPane.showInputDialog(null, "Digite um valor para o primeiro vetor:");
			num[i] = Integer.parseInt(x);
			
			x = JOptionPane.showInputDialog(null, "Digite um valor para o segundo vetor:");
			num2[i] = Integer.parseInt(x);
			
			res[i] = num[i] * num2[i];
			
		}
		
			JOptionPane.showMessageDialog(null, "Os resultado da multiplicação dos vetores é:\n"+num[0] +" * " + num2[0]+" ="+ res[0]+"\n"+num[1] +" * " + num2[1]+" ="+ res[1]+"\n"+num[2] +" * " + num2[2]+" ="+ res[2]);
		
	}

}
