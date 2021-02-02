#include<stdio.h>
int main()
{
    int n,sum = 0,count = 0;

    while(scanf("%d",&n)==1)
    {
        if(n < 0)
            break;

        count++;
        sum = sum + n;
    }

    printf("%.2lf\n",(double)sum/count);

    return 0;
}
