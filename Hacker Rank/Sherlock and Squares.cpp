#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d",&test);

    while(test--)
    {
        int a, b;
        scanf("%d %d",&a, &b);

        a = ceil(sqrt(a));
        b = floor(sqrt(b));

        if(a!=b && (b-a)<=0)
            printf("0\n");
        else
            printf("%d\n",b-a+1);
    }

    return 0;
}
