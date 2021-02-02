#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1,a2,a3,b1,b2,b3,n,a,b;

    scanf("%d%d%d",&a1,&a2,&a3);

    scanf("%d%d%d%d",&b1,&b2,&b3,&n);

    a = a1+a2+a3;
    b = b1+b2+b3;

    //printf("%d %d\n",a,b);

    if(a <= 5 && a > 0)
        a = 1;
    else
        a = ceil((double)a/5);
    if(b <= 10 && b > 0)
        b = 1;
    else
        b = ceil((double)b/10);

    //printf("%d %d\n",a,b);

    if((a+b) <= n)
        printf("YES\n");
    else
        printf("NO\n");


    return 0;
}
