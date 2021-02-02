#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n,even,odd,x;

    cin>>test;

    while(test--)
    {
        cin>>n;

        n = n /2;

        even = n*(n+1);
        odd = n*n;
        x = n - 1;
        x = x*x;
        x = odd - x;

        while(even > odd)
        {
            odd = odd - x;
            x+=2;
            odd = odd + x;
        }
        n = n*2;
        if(even == odd)
        {
            cout<<"YES"<<endl;
            for(int i=2;i<=n;i+=2)
                cout<<i<<" ";
            for(int i=1;i<n-1;i+=2)
                cout<<i<<" ";
            cout<<x<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
