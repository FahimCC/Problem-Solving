#include<bits/stdc++.h>
using namespace std;


int m[100010];
int main()
{
    int n,test,x,flag;

    cin>>test;
    while(test--)
    {
        cin>>n;
        flag = 1;
        for(int i=0;i<n;i++)
        {
            /// 1,1,1,4,4,2
            cin>>x;
            m[x] = m[x]++;

        }
        for(int i=0;i<n;i++)
        {
            if(x == 2048)
            {
                flag = 0;
            }
        }
        if(flag == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
