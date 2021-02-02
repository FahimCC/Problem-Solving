#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n;
    cin>>test;

    while(test--)
    {
        cin>>n;
        if(n%3 == 0)
            cout<<n/3<<endl;
        else
            cout<<n%3<<endl;
    }

    return 0;
}
