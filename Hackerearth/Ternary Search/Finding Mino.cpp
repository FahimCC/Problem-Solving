#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,r,temp,min;

    cin>>n;

    while(n--)
    {
        cin>>l>>r;
        min = 9999999;

        if(l > r)
            swap(l,r);

        for(int i=l;i<=r;i++)
        {
            temp = 2*i*i - 12*i + 7;
            if(min > temp)
                min = temp;
        }
        cout<<min<<endl;
    }

    return 0;
}
