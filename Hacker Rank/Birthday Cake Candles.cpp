#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,max = 0,count = 0,a[1000];

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i] > max)
            max = a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[i] == max)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
