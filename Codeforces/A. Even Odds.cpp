#include<iostream>
using namespace std;

char a[999999];

int main()
{
    long long n,k,i,j,m = 1;
    int x;
    char a[100000];

    cin>>n>>k;

    if(n%2 == 0)
        x = n/2+1;
    else
        x = (n/2) + 2;

    //cout<<x<<endl;

    for(i=1;i<=n;i++)
    {
        if(i%2 != 0)
            a[m++] = i+'0';
        else
            a[x++] = i+'0';
    }

//    for(i=1;i<n;i++)
//        cout<<a[i]<<endl;

    cout<<a[k]<<endl;

    return 0;
}
