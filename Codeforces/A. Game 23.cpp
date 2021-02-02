#include<stdio.h>

int main()
{
    double n,m,x;
    int count = 0;

    scanf("%lf%lf",&n,&m);

    x = n;

    if(n == m)
        count = 0;
    else
        while(x < m)
        {
            if(count%2 == 0)
                x = x * 2;
            else
                x = x * 3;

            count++;

            //printf("%d\n",x);
        }

    if(m == x)
        printf("%d\n",count);
    else
        printf("-1\n");


    return 0;
}
