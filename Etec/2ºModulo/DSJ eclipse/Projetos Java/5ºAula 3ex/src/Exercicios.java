
public class Exercicios{
	static int x, total;
	public static void ex1() {
		
		for(x=150;x<=300; x++) {
			System.out.println("| "+ x + " |");
		}
	}


	public static void ex2() {
	
	for(x=1;x<=1000; x++) {
		System.out.println(+ x + " + " + x + " = " + (total=total+x));
		}
	}
	
	public static void ex3() {
		System.out.println("Os multiplos de 3 de 1 a 100 são ");
		for(x=1;x<=100; x++) {
			if(x%3 ==0) {
				System.out.println("| " + x + " |");
				}
			}
		}
}