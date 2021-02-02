#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,a[11],x;
    list<int>l;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
        cin>>a[i];

    for(int i=1;i<=m;i++)
    {
        cin>>x;
        l.push_back(x);
    }

    for(int i=1;i<=n;i++)
    {
        if(find(l.begin(),l.end(),a[i]) != l.end())
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;


    return 0;
}
