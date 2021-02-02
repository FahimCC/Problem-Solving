#include<stdio.h>

int main()
{
    int a[1000],b[1000],m = 0,n=0,i,c[1000];

    for(i=1;i<=3;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<=3;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=1;i<=3;i++)
    {
        if(a[i] > b[i])
        {
            m++;
        }
        else if(a[i] < b[i])
        {
            n++;
        }
        else
            continue;
    }

    printf("%d %d\n",m,n);
    return 0;
}
