#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[110],b[110],n;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        b[i] = i;
    }

    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
                swap(b[j],b[j+1]);
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
