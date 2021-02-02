#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
    int n,i,a[100000];

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
