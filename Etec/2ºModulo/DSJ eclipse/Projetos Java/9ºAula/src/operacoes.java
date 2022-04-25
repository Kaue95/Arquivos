
import javax.swing.JOptionPane;

	public class operacoes {
		static String x;
		static double a=0,b=0,c=0;
		
		
		public static void soma() {
			
			String x = JOptionPane.showInputDialog(null,"Digite o primeiro valor");
			Double a = Double.parseDouble(x);
		
			x = JOptionPane.showInputDialog(null,"Digite o segundo valor");
			Double b = Double.parseDouble(x);
			
			JOptionPane.showMessageDialog(null, "O resultado da Soma de: \n " + a + " + " + b + " = " + (a+b));
		}
		
		public static void sub() {
			String x = JOptionPane.showInputDialog(null,"Digite o primeiro valor");
			Double a = Double.parseDouble(x);
			
			x = JOptionPane.showInputDialog(null,"Digite o segundo valor");
			Double b = Double.parseDouble(x);
			
			JOptionPane.showMessageDialog(null, "O resultado da Subtração de: \n" + a + " - " + b + " = " + (a-b));
	
		}
		
		public static void mult() {
			String x = JOptionPane.showInputDialog(null,"Digite o primeiro valor");
			Double a = Double.parseDouble(x);
			
			x = JOptionPane.showInputDialog(null,"Digite o segundo valor");
			Double b = Double.parseDouble(x);
			JOptionPane.showMessageDialog(null, "O resultado da Multiplicação de: \n" + a + " * " + b + " = " + (a*b));	
		}
		public static void div() {
			String x = JOptionPane.showInputDialog(null,"Digite o primeiro valor");
			Double a = Double.parseDouble(x);
			
			x = JOptionPane.showInputDialog(null,"Digite o segundo valor");
			Double b = Double.parseDouble(x);
			JOptionPane.showMessageDialog(null, "O resultado da Divisão de: \n" + a + " / " + b + " = " + (a/b));
			
		}
}
