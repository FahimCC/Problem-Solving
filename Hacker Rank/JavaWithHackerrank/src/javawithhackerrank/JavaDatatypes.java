
package javawithhackerrank;

import static java.lang.Math.pow;
import java.util.Scanner;

public class JavaDatatypes {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int test = input.nextInt();
        
        for (int i = 0; i < test; i++) {
            
            try {
                
                long n = input.nextLong();
                System.out.println(n + " can be fitted in:");

                if(n >= -128 && n<= 127)
                   System.out.println("* byte");

                if(n >= -pow(2, 15) && n <= pow(2, 15) - 1)
                   System.out.println("* short");

                if(n >= -pow(2, 31) && n <= pow(2, 31) - 1)
                   System.out.println("* int");

                if(n >= -pow(2, 63) && n <= pow(2, 63) - 1)
                   System.out.println("* long");
            }
            catch (Exception e) {
                System.out.println(input.next()+" can't be fitted anywhere.");
            }
        }
    }
}
