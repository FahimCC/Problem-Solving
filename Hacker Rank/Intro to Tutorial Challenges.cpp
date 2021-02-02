#include<bits/stdc++.h>
using namespace std;

int main()
{
    int item,n,x,ans;

    cin>>item>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x == item)
            ans = i;
    }

    cout<<ans<<endl;

    return 0;
}
