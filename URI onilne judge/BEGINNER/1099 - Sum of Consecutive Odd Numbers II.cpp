#include<iostream>
using namespace std;

int main()
{
    int y,x,test,sum;

    cin>>test;
    while(test--)
    {
        cin>>x>>y;
        if(x > y)
        {
            x = x+y;
            y = x-y;
            x = x-y;
        }
        sum = 0;
        for(int i=x+1;i<y;i++)
        {
            if(i%2 != 0)
                sum = sum + i;
        }
        cout<<sum<<endl;
    }

    return 0;
}
