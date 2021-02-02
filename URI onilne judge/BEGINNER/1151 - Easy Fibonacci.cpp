#include<stdio.h>

int main()
{
    int n,f[100000];

    scanf("%d",&n);

    f[0] = 0;
    f[1] = 1;

    for(int i=2;i<n;i++)
    {
        f[i] = f[i-1] + f[i-2];
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",f[i]);
        if(i != n-1)
            printf(" ");
    }
    printf("\n");

    return 0;
}
