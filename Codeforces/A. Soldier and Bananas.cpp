#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
    long long sum = 0,ans;

    scanf("%d%d%d",&k,&n,&w);

    for(int i=1;i<=w;i++)
        sum = sum + (k*i);

    if(sum <= n)
        printf("0\n");
    else
        printf("%d\n",sum-n);

    return 0;
}
