#include<stdio.h>

int main()
{
    char name[30];
    double total,sa,se;
    scanf("%s",&name);
    scanf("%lf%lf",&sa,&se);
    total = sa+((se*15)/100);
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
