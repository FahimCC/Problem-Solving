#include<bits/stdc++.h>
using namespace std;

int main()
{

    unsigned long long a,b,test;

    cin>>test;

    while(test--)
    {
        cin>>a>>b;

        if(a == b || a%b == 0)
            cout<<0<<endl;
        else if(a < b)
            cout<<b - a<<endl;
        else
        {
            double d = (double)a/(double)b;
            cout<<int(ceil(d)*b)-a<<endl;
        }
    }

    return 0;
}
