#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count = 0;

    cin>>n;

    while(n > 0)
    {
        if(count%2==0)
            n = n - 1;
        else
            n = n - 2;


        if(n >= 0)
            count++;
        //cout<<n<<" "<<count<<endl;
    }

    cout<<count<<endl;

    return 0;
}
