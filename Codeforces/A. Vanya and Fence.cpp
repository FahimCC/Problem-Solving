#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    int n,h,x,sum = 0;

    cin>>n>>h;

    for(int i=1;i<=n;i++)
    {
        cin>>x;

        if(x > h)
            sum = sum + 2;
        else
            sum = sum + 1;
    }

    cout<<sum<<endl;

    return 0;
}
