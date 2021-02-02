#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,s[100010],d[100010],f = 0;

    cin>>n>>t;

    for(int i=1;i<=n;i++)
    {
        cin>>s[i]>>d[i];
        if(t <= s[i] && f!=1)
        {
            cout<<i<<endl;
            f = 1;
        }
    }

    if(f == 0)
    //for(int i=1;i<=n;i++)
    {
        while(1)
        {
            if(t <= s[1])
            {
                cout<<1<<endl;
                break;
            }
            s[1] = s[1] + d[1];
        }

    }

    return 0;
}
