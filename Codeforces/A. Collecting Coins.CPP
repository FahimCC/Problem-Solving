#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    long long a,b,c,n,maxx,coin;

    cin>>test;

    while(test--)
    {
        cin>>a>>b>>c>>n;
        maxx = max(a,max(b,c));
        coin = (maxx-a)+(maxx-b)+(maxx-c);
        if(coin <= n)
        {
            coin = abs(n - coin);
            if(coin%3 == 0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
