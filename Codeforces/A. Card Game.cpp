#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k1,k2,x,test,max,maxx;

    cin>>test;
    while(test--)
    {
        cin>>n>>k1>>k2;

        max = 0;
        while(k1--)
        {
            cin>>x;
            if(max < x)
                max = x;
        }
        maxx = 0;
        while(k2--)
        {
            cin>>x;
            if(maxx < x)
                maxx = x;
        }

        if(max > maxx)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
