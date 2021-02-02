
package javawithhackerrank;

import java.util.Scanner;

public class JavaEndoffile {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int count = 1;
        
        while (input.hasNext()) {
            
            String s = input.nextLine();
            
            System.out.println(count++ + " " + s);
            
        }
        
    }
    
}
