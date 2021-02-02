#include<stdio.h>

int main()
{
    int n,k,i,a[1000],count = 0,j;

    scanf("%d%d",&n,&k);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i < j) && ((a[i]+a[j]==k) || (a[i]+a[j])%k==0))
            {
                printf("%d %d %d\n",i,j,(a[i]+a[j]));
                count++;
            }
        }
    }

    printf("%d\n",count);
    return 0;
}
