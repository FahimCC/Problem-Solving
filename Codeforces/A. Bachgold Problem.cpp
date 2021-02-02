#include<iostream>
using namespace std;

int main()
{
    int n,sum = 0;

    cin>>n;

    if(n%2 == 0)
    {
        n = n/2;
        cout<<n<<endl;
        for(int i=1;i<=n;i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        n = n-1;
        n = n/2;
        cout<<n<<endl;
        for(int i=1;i<=n-1;i++)
        {
            cout<<2<<" ";
        }
        cout<<3;
    }
    cout<<endl;

    return 0;
}
