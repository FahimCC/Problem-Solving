#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,h,m,n,flag;

    cin>>test;

    while(test--)
    {
        cin>>h>>n>>m;

        flag = 0;
        m = m*10;
        if(0 >= (h-m))
        {
            flag = 1;
            goto skip;
        }

        for(int i=1;i<=n;i++)
        {
            if(h <= 0)
            {
                flag = 1;
                break;
            }

            h = (h/2.0) + 10;
        }
        if(h > 0)
            h = h - m;

        skip:
        if(h <= 0 || flag == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}

