#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n,a[10000],sum = 0;

    scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }

    printf("%d\n",sum);
    return 0;
}
