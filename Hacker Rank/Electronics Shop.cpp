#include<iostream>
using namespace std;

int main()
{
    long long a[100000],b[100000],c[100000],d[100000],i,j,n,m,x;
    long long k=0,max = 0;

    cin>>x>>m>>n;

    for(i=1;i<=m;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        cin>>b[i];
    }

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((a[i]+b[j]) <= x)
            {
                c[k++] = (a[i]+b[j]);
            }
        }
    }

    if(k == 0)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    long long s = 0;
    for(i=1;i<=k;i++)
    {
        if(c[i] <= x)
        {
            d[s++] = c[i];
        }
    }
    for(i=1;i<=s;i++)
    {
        if(max < d[i])
            max = d[i];
    }

    cout<<max<<endl;
    return 0;
}
