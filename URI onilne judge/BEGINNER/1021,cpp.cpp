#include<stdio.h>
int main()
{
    double d;
    int n,r1,r2,r3,r4,r5,r6,r7,r8,r9,r11,r12,r13;
    scanf("%lf",&d);
    n=d*100;
    printf("NOTAS:\n");
    r1=n/10000;
    printf("%d nota(s) de R$ 100.00\n",r1);
    n=n%10000;
    r2=n/5000;
    printf("%d nota(s) de R$ 50.00\n",r2);
    n=n%5000;
    r3=n/2000;
    printf("%d nota(s) de R$ 20.00\n",r3);
    n=n%2000;
    r4=n/1000;
    printf("%d nota(s) de R$ 10.00\n",r4);
    n=n%1000;
    r5=n/500;
    printf("%d nota(s) de R$ 5.00\n",r5);
    n=n%500;
    r6=n/200;
    printf("%d nota(s) de R$ 2.00\n",r6);
    n=n%200;
    printf("MOEDAS:\n");
    r7=n/100;
    printf("%d moeda(s) de R$ 1.00\n",r7);
    n=n%100;
    r8=n/50;
    printf("%d moeda(s) de R$ 0.50\n",r8);
    n=n%50;
    r9=n/25;
    printf("%d moeda(s) de R$ 0.25\n",r9);
    n=n%25;
    r11=n/10;
    printf("%d moeda(s) de R$ 0.10\n",r11);
    n=n%10;
    r12=n/5;
    printf("%d moeda(s) de R$ 0.05\n",r12);
    n=n%5;
    r13=n/1;
    printf("%d moeda(s) de R$ 0.01\n",r13);
    return 0;
}
