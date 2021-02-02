#include<iostream>
using namespace std;

int main()
{
    int a[100000],i = 0,n,r;
    cin>>n;
    while(n!=0)
    {
        r = n%2;
        a[i++] = r;
        n = n/2;
    }
    for(int j=1;j<=i;j++)
    {
        cout<<a[j]<<" ";
    }
    return 0;
}
