
package javawithhackerrank;

import java.util.Scanner;

public class JavaSubstring {
 
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        String A = input.nextLine();
        int start = input.nextInt();
        int end = input.nextInt();
        
        System.out.println(A.substring(start,end));
        
    }
}
