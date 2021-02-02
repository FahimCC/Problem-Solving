#include<stdio.h>

int main()
{
    int h1,h2,m1,m2,t,t1,t2,h,m;

    scanf("%d:%d%d:%d",&h1,&m1,&h2,&m2);

    t1 = (h1*60) + m1;
    t2 = (h2*60) + m2;

    t = (t1+t2) / 2;

    h = t/60;
    m = t%60;



    if(h < 10)
        if(m < 10)
            printf("0%d:0%d\n",h,m);
        else
            printf("0%d:%d\n",h,m);
    else
        if(m < 10)
            printf("%d:0%d\n",h,m);
        else
            printf("%d:%d\n",h,m);
    return 0;
}
