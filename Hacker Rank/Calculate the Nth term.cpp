#include<stdio.h>
int main()
{
    int A[1000],i,n,a,b,c,sum = 0;

    scanf("%d",&n);
    scanf("%d %d %d",&a,&b,&c);
    i = 1;
    A[i++] = a;
    A[i++] = b;
    A[i++] = c;

    for(i=4;i<=n;i++)
    {
        A[i] = (A[i-1] + A[i-2] + A[i-3]);
    }

    printf("%d\n",A[n]);

    return 0;
}
