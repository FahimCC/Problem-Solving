#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x,y,z,count = 0;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>x>>y>>z;

        if(x+y+z >= 2)
            count++;
    }

    cout<<count<<endl;

    return 0;
}

