#include<stdio.h>
int main()
{
    double a,b,c,x,y;
    scanf("%lf%lf%lf",&a,&b,&c);
    x=a+b+c;
    y=(a+b)*c/2;
    if(x==120)
        printf("Perimetro = %.1lf",x);
    else if(y)
        printf("Area = %.1lf",y);
    return 0;
}
