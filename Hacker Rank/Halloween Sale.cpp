#include<iostream>
using namespace std;

int main()
{
    int m,p,d,s,i=0,j,a[100000],n,sum = 0;

    cin>>m>>p>>d>>s;

    a[i++] = m;
    while(d <= m)
    {
        m = m - p;
        a[i++] = m;
    }
    i--;

    n = i+d;
    for(j=i;j<n;j++)
        a[j] = d;

    for(i=0;i<n;i++)
    {
        if(sum > s)
            break;
        sum = sum + a[i];
    }

    cout<<i-1<<endl;

    return 0;
}
