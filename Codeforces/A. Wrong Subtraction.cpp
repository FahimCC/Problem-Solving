#include<stdio.h>

int main()
{
    long long n;
    int k;

    scanf("%lld%d",&n,&k);
    while(k--)
    {
        if((n%10) == 0)
        {
            n = n/10;
        }
        else
        {
            n = n -1;
        }
    }
    printf("%d\n",n);

    return 0;
}
