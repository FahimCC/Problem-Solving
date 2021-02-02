#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,sum,sumo = 0,i,j;

    cin>>n;

    sum = (n*(n+1))/2.0;

    for(i=1;i<=n;i=i+2)
    {
        sumo = sumo + i;
    }

    cout<<sumo - sum<<endl;

    return 0;
}
