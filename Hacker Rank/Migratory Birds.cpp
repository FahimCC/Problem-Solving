#include<stdio.h>
int main()
{
    int n,i,a[1000],b[1000]={0},max = 0,ans;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i] == 1)
            b[1]++;
        else if(a[i] == 2)
            b[2]++;
        else if(a[i] == 3)
            b[3]++;
        else if(a[i] == 4)
            b[4]++;
        else if(a[i] == 5)
            b[5]++;
    }

    for(i=1;i<=5;i++)
    {
        if(b[i] > max)
        {
            max = b[i];
            ans = i;
        }

    }

    printf("%d\n",ans);
    return 0;
}
