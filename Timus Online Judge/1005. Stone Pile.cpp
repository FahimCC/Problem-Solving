#include<iostream>
using namespace std;

int main()
{
    int n,a[1000],s = 0,b[1000], j = 1, minn = 2147483647;

    ;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    for(int i=2;i<=5;i++)
    {
        s = a[i-1] - a[i];

        if(s<0)
        {
            s = (-1) * s;
        }

        b[j++] = s;
    }
    for(int i=1;i<n;i++)
    {
        if(b[i] < minn)
            minn = b[i];
    }
    cout<<minn<<endl;
    return 0;
}
