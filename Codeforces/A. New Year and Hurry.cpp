#include<iostream>
using namespace std;

int main()
{
    int n,k,x,sum = 0,count = 0;

    cin>>n>>k;

    x = 240 - k;

    for(int i=1;i<=n;i++)
    {
        sum = sum + (i*5);
        if(sum <= x)
        {
            count++;
            //break;
        }

    }

    cout<<count<<endl;

    return 0;
}
