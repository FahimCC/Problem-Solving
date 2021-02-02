
package javawithhackerrank;

import static java.lang.Math.pow;
import java.util.Scanner;

public class JavaLoopsII {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int test = input.nextInt();
        
        for (int j = 1; j <= test; j++) {
            int a = input.nextInt();
            int b = input.nextInt();
            int n = input.nextInt();


            for (int i = 1; i <= n; i++) {            
                int sum = a;
                for (int k = 0; k < i; k++) {
                    sum += (pow(2,k)*b);
                }
                System.out.print(sum + " ");
            }
            System.out.println("");
        }
    } 
}
