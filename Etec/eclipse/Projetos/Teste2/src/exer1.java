import java.util.Scanner;



public class exer1 {

	public static void main(String[] args) {
		
		Scanner grava = new Scanner(System.in);
		
      int a=0, b=0, c=0 , temp=0, cont=0;
      
      System.out.println("Digite o valor de A");
      a = grava.nextInt();
      
      System.out.println("Digite o valor de B");
      b = grava.nextInt();
      
      
      System.out.println("Digite o valor de C");
      c = grava.nextInt();
      
      
    for(cont =0 ; cont < 10; cont++){	  
      if(a > b) {
       
    	temp = a;
    	a =b;
    	b = temp;
    		  
      }else if( b > c){
    	  
    	temp = b;
      	b =c;
      	c = temp;
    	  
      }
    }		
      
	 System.out.println(" A Sequência é  "+ a + " , " + b + " ,  " + c)	;
	
	}
		
	}


