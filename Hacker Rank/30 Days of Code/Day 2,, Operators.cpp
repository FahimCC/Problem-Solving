#include<stdio.h>
int main()
{
    int y,x;
    double d,tip,tax,total;

    scanf("%lf %d %d",&d,&x,&y);
    tip = (d*(x/100.0));
    tax = (d*(y/100.0));
    total = d+tip+tax;


    printf("The total meal cost is ");
    printf("%.0lf ",total);
    printf("dollars.\n");

    return 0;
}
