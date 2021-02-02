
package javawithhackerrank;

import java.util.Scanner;

public class JavaInttoString {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        try {
            int i = input.nextInt();
        
            String s = String.valueOf(i);
            
            System.out.println("Good Job");
        }
        catch (Exception e) { 
            System.out.println("Wrong Answer");
        }
        
    }
    
}
