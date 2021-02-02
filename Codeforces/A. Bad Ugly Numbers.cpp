#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,test;

    cin>>test;

    while(test--)
    {
        cin>>n;

        if(n == 1)
        {
            cout<<"-1"<<endl;
            continue;
        }

        for(int i=1;i<n;i++)
            cout<<"2";
        cout<<"7"<<endl;
    }

    return 0;
}
