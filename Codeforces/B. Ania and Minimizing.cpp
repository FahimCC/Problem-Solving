#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x,ss;
    char s[200004];

    cin>>n>>k;

    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
    }

    if(k == 0)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<s[i];
        }
    }
    else if(n==1 && k>=1)
    {
        cout<<0;
        //51528;
    }
    else
    {
        if(s[1] == '1')
        {
            cout<<"1";
            //x = 2;
        }
        else
        {
            cout<<"1";
            //x = 2;
            k--;
        }
        for(int i=2;i<=n;i++)
        {
            if(s[i] != '0' && k != 0)
            {
                cout<<"0";
                k--;
            }
            else
                cout<<s[i];
        }
    }
    cout<<endl;
    return 0;
}
