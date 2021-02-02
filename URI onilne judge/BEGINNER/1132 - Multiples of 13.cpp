#include<iostream>
using namespace std;

int main()
{
    int x,y,t,sum = 0;

    cin>>x>>y;

    if(x > y)
    {
        t = x;
        x = y;
        y = t;
    }

    for(int i=x;i<=y;i++)
    {
        if(i%13 != 0)
            sum = sum + i;
    }
    cout<<sum<<endl;

    return 0;
}
