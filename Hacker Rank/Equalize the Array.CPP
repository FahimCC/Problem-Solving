#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[105] = {0}, n, x;
    scanf("%d", &n);

    int max = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d", &x);
        a[x]++;
        if(a[x] > max)
            max = a[x];
    }

    printf("%d\n",n-max);

    return 0;
}
