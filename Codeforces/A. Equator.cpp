#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,day,a[200010],sum = 0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        sum = sum + a[i];
        //cout<<sum<<endl;
        if(sum >= n)
        {
            day = i+1;
            break;
        }
    }

    cout<<day<<endl;

    return 0;
}
