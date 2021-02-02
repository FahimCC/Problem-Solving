#include<iostream>
using namespace std;

int main()
{
    int n,a[100000],i,count = 0;

    cin>>n;

    for(i=0;i<n+3;i++)
    {
        a[i] = -1;
    }
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        if(a[i] == 1)
        {
            continue;
        }
        if(a[i]==0 && a[i+1]==0 && a[i+2]==0)
        {
            count ++;
            i++;
            continue;
        }
        if(a[i]==0 && a[i+1]==0)
        {
            count++;
            continue;
        }
        if(a[i]==0 && a[i+2]==0)
        {
            count++;
            i++;
            continue;
        }
    }

    cout<<count<<endl;
    return 0;
}
