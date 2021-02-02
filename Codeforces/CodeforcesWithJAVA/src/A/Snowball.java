
package A;

import java.util.Scanner;

public class Snowball {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
     
        int w, h, w1, h1, w2, h2;
        
        w = input.nextInt();
        h = input.nextInt();
        w1 = input.nextInt();
        h1 = input.nextInt();
        w2 = input.nextInt();
        h2 = input.nextInt();
        
        System.out.println(w+h+h1+h2-w1-w2);
        
    }
    
}
