#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,f = 1;

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        f = f*n;
    }

    cout<<f<<endl;
    return 0;
}
