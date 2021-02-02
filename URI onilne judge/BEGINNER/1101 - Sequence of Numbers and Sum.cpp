#include<iostream>
using namespace std;

int main()
{
    int m,n,sum,t;

    while(cin>>n>>m)
    {
        if(n<=0 || m<=0)
            break;

        if(n > m)
        {
            t = n;
            n = m;
            m = t;
        }

        sum = 0;
        for(int i=n;i<=m;i++)
        {
            cout<<i<<" ";
            sum = sum + i;
        }
        cout<<"Sum="<<sum<<endl;
    }


    return 0;
}
