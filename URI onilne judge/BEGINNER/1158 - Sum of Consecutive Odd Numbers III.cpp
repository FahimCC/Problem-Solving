#include<iostream>
using namespace std;

int main()
{
    int a,b,sum,test;

    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        if(a%2 == 0)
            a = a + 1;
        sum = 0;
        for(int i=1;i<=b;i++)
        {
            sum = sum + a;
            a = a + 2;
        }
        cout<<sum<<endl;
    }


    return 0;
}
