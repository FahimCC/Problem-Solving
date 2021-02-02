#include<stdio.h>

int main()
{
    int i,j,n,a[1000][1000],k;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int sum = 0,summ = 0,m=1;
    for(k=1;k<=n;k++)
    {
        sum = sum + a[k][k];
    }
    for(k=n;k>=1;k--)
    {
        {
            summ = summ + a[k][m];
            m++;
        }
    }

    int result = sum - summ;
    if(result > 0)
        printf("%d",result);
    else
        printf("%d",(-1)*result);

    return 0;
}
