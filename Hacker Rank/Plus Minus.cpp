#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x,i,a[10000];
    double p=0,n=0,z=0;

    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        scanf("%d",&a[i]);
        if(a[i] > 0)
            p++;
        else if(a[i] < 0)
            n++;
        else
            z++;
    }

    printf("%f\n%f\n%f\n",(p/x),(n/x),(z/x));
    return 0;
}
