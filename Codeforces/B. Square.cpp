#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin>>test;

    while(test--)
    {
        int a,b,c,d;

        cin>>a>>b>>c>>d;

        if(((a==b) && (c==d)) || (a+c)==b || (a+d)==b || (b+c)==a || (b+d)==a)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }


    return 0;
}

