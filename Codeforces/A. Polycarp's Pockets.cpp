#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[105],c[105],max = 0;

    for(int i=0;i<102;i++)
        c[i] = 0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        c[a[i]]++;
        //cout<<c[a[i]]<<endl;
    }
    for(int i=1;i<102;i++)
    {
        if(max < c[i])
            max = c[i];
    }

    cout<<max<<endl;


    return 0;
}
