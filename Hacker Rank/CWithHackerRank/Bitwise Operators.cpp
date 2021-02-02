#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k)
{
    int a,o,x,maxAnd = 0, maxOr = 0, maxXOr = 0;

    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            a = i&j;
            o = i|j;
            x = i^j;

            if(k > a && maxAnd < a)
                maxAnd = a;
            if(k > o && maxOr < o)
                maxOr = o;
            if(k > x && maxXOr < x)
                maxXOr = x;
        }
    }
    printf("%d\n%d\n%d\n",maxAnd,maxOr,maxXOr);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
