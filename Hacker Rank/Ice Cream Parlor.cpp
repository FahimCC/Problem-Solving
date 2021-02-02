#include<stdio.h>
int main()
{
    int test, a[1000],b[1000],t;

    scanf("%d",&test);

    while(test--)
    {
        int d,i,j,n,k;
        scanf("%d %d",&d,&n);

        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }

        k = 0;
        for(i=1;i<=n;i++)
        {
            for(j=(i+1);j<=n;j++)
            {
                int sum = (a[i] + a[j]);
                if(sum == d)
                {
                    k = k + 1;
                    b[k] = i;
                    k = k + 1;
                    b[k] = j;
                    goto step;
                }
            }
        }

        step:
        for(i=1;i<=k-1;i++)
        {
            for(j=1;j<=k-i;j++)
            {
                if(b[j]>b[j+1])
                {
                    t = b[j];
                    b[j] = b[j+1];
                    b[j+1] = t;
                }
            }
        }
        for(i=1;i<=k;i++)
            printf("%d ",b[i]);
        printf("\n");
    }

    return 0;
}
