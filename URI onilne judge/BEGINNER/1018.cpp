#include<stdio.h>
int main()
{
    int n,r2,r1,r3,r4,r5,r6,r7;
    scanf("%d",&n);
    printf("%d\n",n);
    if(0<n<1000000)
    {
    r1=n/100;
    printf("%d nota(s) de R$ 100,00\n",r1);
    n=n%100;
    r2=n/50;
    printf("%d nota(s) de R$ 50,00\n",r2);
    n=n%50;
    r3=n/20;
    printf("%d nota(s) de R$ 20,00\n",r3);
    n=n%20;
    r4=n/10;
    printf("%d nota(s) de R$ 10,00\n",r4);
    n=n%10;
    r5=n/5;
    printf("%d nota(s) de R$ 5,00\n",r5);
    n=n%5;
    r6=n/2;
    printf("%d nota(s) de R$ 2,00\n",r6);
    n=n%2;
    r7=n/1;
    printf("%d nota(s) de R$ 1,00\n",r7);
    }
    return 0;
}
