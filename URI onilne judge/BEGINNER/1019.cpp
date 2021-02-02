#include<stdio.h>
int main()
{
    int n,r,r1,r2;
    scanf("%d",&n);
    r=n/3600;
    n=n%3600;
    r1=n/60;
    n=n%60;
    r2=n/1;
    printf("%d:%d:%d\n",r,r1,r2);
    return 0;
}
