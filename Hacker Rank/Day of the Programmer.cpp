#include<stdio.h>
int main()
{
    int n,ans;

    scanf("%d",&n);

    if(n == 1918)
    {
        ans = 260 - 256;
        printf("%d.09.%d\n",30-ans,n);
    }
    else if(n>=1700 && n<=1917 && n%4==0)
    {
        ans = 256 - 244;
        printf("%d.09.%d\n",ans,n);
    }
    else if(n>=1919 && n<=2700 && n%400==0 && ((n%4==0 && n%100!=0)))
    {
        ans = 256 - 244;
        printf("%d.09.%d\n",ans,n);
    }
    else
    {
        ans = 256 - 243;
        printf("%d.09.%d\n",ans,n);
    }

    return 0;
}
