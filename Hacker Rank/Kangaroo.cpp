#include<stdio.h>

int main()
{
    int x1,x2,v1,v2,f = 1;

    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);

    while(v1 <= 10000 || v2 <= 10000)
    {
        if(x1 < x2 && v1 <= v2)
            break;
        else if(x1 <= x2 && v1 < v2)
            break;
        else if(x1 > x2 && v1 >= v2)
            break;
        else if(x1 >= x2 && v1 > v2)
            break;

        x1 = x1+v1;
        x2 = x2+v2;

        if(x1 == x2)
        {
            f = 2;
            break;
        }
    }

    if(f == 2)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
