#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n,a,b,c,d;

    cin>>test;

    while(test--)
    {
        cin>>n>>a>>b>>c>>d;

        int x = a-b;
        int y = a+b;
        int flag = 0;
        for(int i=x;i<=y;i++)
        {
            if((c-d)<=(i*n) && (i*n)<=(c+d))
            {
                //cout<<i<<endl;
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
