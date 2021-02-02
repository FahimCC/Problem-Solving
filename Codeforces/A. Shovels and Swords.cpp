#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin>>test;

    while(test--)
    {
        int a,b;
        cin>>a>>b;

        if(a==0 || b==0)
            cout<<0<<endl;
        else if(a > b)
            cout<<ceil(a/2)<<endl;
        else
            cout<<ceil(b/2)<<endl;
    }

    return 0;
}
