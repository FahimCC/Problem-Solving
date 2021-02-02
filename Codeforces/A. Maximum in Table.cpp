#include<stdio.h>

int main()
{
    int a[12][12],n,max = 0;

    scanf("%d",&n);

    if(n == 1)
        max = 1;

    for(int i=1;i<=n;i++)
    {
        a[1][i] = 1;
    }

    for(int i=1;i<=n;i++)
    {
        a[i][1] = 1;
    }

    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<=n;j++)
        {
            a[i][j] = a[i-1][j] + a[i][j-1];

            if(max < a[i][j])
                max = a[i][j];
        }
    }

    printf("%d\n",max);


    return 0;
}
