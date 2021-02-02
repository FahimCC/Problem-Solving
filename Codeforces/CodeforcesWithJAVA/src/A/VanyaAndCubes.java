package A;

import java.util.Scanner;

public class VanyaAndCubes {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int n = input.nextInt();
        
        int sum = 0, count = -1, i = 1, j = 0;
        
        while(sum <= n){
        
            j = j + i;
            i++;
            count++;
            sum  = sum + j;
        }
        
        System.out.println(count);
    }
}
