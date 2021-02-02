#include<stdio.h>
int main()
{
    int n,r,r1,r2;
    scanf("%d",&n);
    r=n/365;
    n=n%365;
    r1=n/30;
    n=n%30;
    r2=n/1;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",r,r1,r2);
    return 0;
}
