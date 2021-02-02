#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long long int sum = 0,max = 0,min = (pow(2,64)-1);
    long long int a[1000],b[1000];
    int i;
    for(i=1;i<=5;i++)
    {
        scanf("%lld",&a[i]);
        sum = sum + a[i];
    }

    for(i=1;i<=5;i++)
    {
        b[i] = sum - a[i];
    }

    for(i=1;i<=5;i++)
    {
        if(b[i] > max)
            max = b[i];

        if(b[i] < min)
            min = b[i];
    }

    printf("%lld %lld\n" ,min,max);

    return 0;
}
