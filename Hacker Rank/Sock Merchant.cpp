#include<iostream>
using namespace std;

int main()
{
    int n,i,a[100000],b[100000]={0},max=0,sum=0;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
        if(max < a[i])
            max = a[i];
    }

    for(i=1;i<=max;i++)
    {
        sum = sum + int (b[i]/2);
    }

    cout<<sum<<endl;

    return 0;
}
