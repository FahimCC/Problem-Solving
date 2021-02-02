#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,i;

    cin>>n>>k;

    i = 1;

    while(k*i <= n)
        i++;

    cout<<k*i<<endl;

    return 0;
}
