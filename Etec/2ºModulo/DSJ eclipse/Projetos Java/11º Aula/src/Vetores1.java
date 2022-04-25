import javax.swing.JOptionPane;


public class Vetores1 {

public static void main(String[] args) {

	int valor, y=0 , w =0;
	int[] par = new int [5];
	int[] impar = new int [5];
	for(int i = 0 ; i < 30 ; i ++){
		String x = JOptionPane.showInputDialog(null, "Digite o valor "+ (i+1));
		valor = Integer.parseInt(x);
		if(valor % 2 ==0 ){
		if( y ==5 ){
			JOptionPane.showMessageDialog(null, "Vetor par cheio");
		}else{
		par[y]= valor;
		y = y+1;
		}
		
		}else{
		if( w == 5 ){
		JOptionPane.showMessageDialog(null, "Vetor impar cheio");
		}else{
		impar[w] =valor;
		w = w+1;
		}
	
		}

		}	
	}
}