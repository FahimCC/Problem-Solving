#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";


    // Declare second integer, double, and String variables.
    int x;
    double y;
    char a[1000];

    // Read and save an integer, double, and String to your variables.
    scanf("%d%lf",&x,&y);
    getchar();
    scanf("%[^\n]",a);

    // Print the sum of both integer variables on a new line.Print the sum of the double variables on a new line.
    printf("%d\n%.1lf\n%s%s",(x+i),(y+d),s,a);

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}
