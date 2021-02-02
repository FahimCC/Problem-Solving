#include<iostream>
using namespace std;

int main()
{
    int n,k,i,a[100000],b,sum = 0,avg;

    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i == k)
            a[i] = 0;
        sum = sum + a[i];
    }
    avg = sum/2;

    cin>>b;

    if(b != avg)
        cout<<b - avg<<endl;
    else
        cout<<"Bon Appetit"<<endl;

    return 0;
}
