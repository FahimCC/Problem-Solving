#include<iostream>
using namespace std;

int main()
{
    int a[100000],n,i,k,f = 1,sum = 0;

    cin>>n>>k;

    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(k >= a[i])
        {
            continue;
        }
        else
        {
            f = 2;
            sum +=(a[i]-k);
            k = a[i];
        }
    }

    if(f == 1)
        cout<<"0"<<endl;
    else
        cout<<sum<<endl;

    return 0;
}
