#include<iostream>
using namespace std;

int main()
{
    long long s,t,x,y,a[100000],aa[100000],o[100000],oo[100000],m,n,i;
    long long countO=0,countA=0;

    cin>>s>>t;
    cin>>x>>y;          ///apple tree = x && orange tree = y;

    cin>>m>>n;

    for(i=1;i<=m;i++)
    {
        cin>>a[i];
        aa[i] = a[i] + x;
    }

    for(i=1;i<=n;i++)
    {
        cin>>o[i];
        oo[i] = o[i] + y;
    }

    for(i=1;i<=m;i++)
    {
        if(aa[i]>=s && aa[i]<=t)
            countA++;
    }
    for(i=1;i<=n;i++)
    {
        if(oo[i]>=s && oo[i]<=t)
            countO++;
    }

    cout<<countA<<endl<<countO<<endl;

    return 0;
}
