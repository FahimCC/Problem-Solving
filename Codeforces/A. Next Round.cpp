#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,x,count = 0,a[110];

    cin>>n>>k;

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];

        if(a[i] > 0 && i <= k)
            count++;
    }

    while(a[k]!=0 && a[k]==a[k+1] && k!=n+1)
    {
        count++;
        k++;
    }


    cout<<count<<endl;

    return 0;
}

