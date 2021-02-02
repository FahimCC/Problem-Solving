#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x,sum25 = 0,sum50 = 0,flag = 1;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x == 25)
            sum25++;
        else if(x == 50)
            sum50++;
    }



    if(flag == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
