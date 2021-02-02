#include<stdio.h>
int main()
{
    int a[1000],b[1000],c[1000],n,i,max = 0, min =2147483647,countMax=0,countMin=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<=n;i++)
    {
        if(max < a[i])
        {
            max = a[i];
            b[i] = a[i];
        }
        else
            b[i] = b[i-1];

        if(min > a[i])
        {
            min = a[i];
            c[i] = a[i];
        }
        else
            c[i] = c[i-1];
    }

    max = b[1];
    min = c[1];

    for(i=1;i<=n;i++)
    {
        if(max != b[i])
        {
            max = b[i];
            countMax++;
        }

        if(min != c[i])
        {
            min = c[i];
            countMin++;
        }
    }

    printf("%d %d\n",countMax,countMin);
    return 0;
}
