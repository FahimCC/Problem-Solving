#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t,n,m;

    cin>>t;
    while(t--)
    {
        cin>>n>>m;

        if(n == 1 || m == 1)
            cout<<"YES"<<endl;
        else if(n == 2 && m == 2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}
