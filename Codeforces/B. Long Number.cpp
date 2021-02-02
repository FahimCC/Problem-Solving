#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[300010],x,l;
    char c[1000];

    cin>>n;
    getchar();

    for(int i=1;i<=n;i++)
    {
        cin>>c[i];
    }

    for(int i=1;i<=9;i++)
    {
        cin>>a[i];
    }

    for(int i=1;i<=n;i++)
    {
        x = c[i]-'0';
        //cout<<"Fahim"<<endl;
        cout<<max(x,a[x]);
    }
    cout<<endl;

    return 0;
}
