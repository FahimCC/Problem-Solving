#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long x=1,s=1;
    int n;

    cin>>n;

    for(int j=100,i=1;i<=n;i++)
    {
        x = 2*x;
        s = x;

        if(i >= 13)
        {
            //cout<<x<<" "<<j<< endl;
            s = s - j;
            j = 2*j;

        }
    }

    cout<<s<<endl;

    return 0;
}
