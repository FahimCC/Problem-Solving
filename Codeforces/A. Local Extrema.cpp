#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,count = 0,a[1010];

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    for(int i=2;i<n;i++)
    {
        if(a[i]<a[i-1] && a[i]<a[i+1])
            count++;
        else if(a[i]>a[i-1] && a[i]>a[i+1])
            count++;
    }

    cout<<count<<endl;

    return 0;
}
