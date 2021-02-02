#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long n,x;
    int test;
    cin>>test;

    while(test--)
    {
        cin>>n;
        x = n/2;
        cout<<x*(n-x)<<endl;
    }

    return 0;
}
