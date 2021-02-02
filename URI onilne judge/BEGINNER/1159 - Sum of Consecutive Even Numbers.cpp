#include<stdio.h>
int main()
{
    int n,sum;

    while(scanf("%d",&n)!=EOF)
    {
        sum = 0;
        if(n == 0)
            break;

        if(n%2 != 0)
        {
            n++;
        }

        for(int i=1;i<=5;i++)
        {
            sum = sum + n;
            n = n + 2;
        }

        printf("%d\n",sum);
    }
    return 0;
}
