#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,f,sum = 0;

    cin>>n>>f;

    if(n <= f)
        sum = n-1;
    else
    {
        sum = f;
        for(int i=2;i<=n;i++)
        {
            if(f >= n-1)
                break;
            sum = sum + i;
            f = f + 1;
        }
    }

    cout<<sum<<endl;

    return 0;
}
