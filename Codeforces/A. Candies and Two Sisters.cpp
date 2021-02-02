#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    long long n;

    cin>>test;

    while(test--)
    {
        cin>>n;
        if(n == 1 || n == 2)
            cout<<0<<endl;
        else
        {
            if(n & 1)
                cout<<(n/2)<<endl;
            else
                cout<<(n/2)-1<<endl;
        }

    }

    return 0;
}
