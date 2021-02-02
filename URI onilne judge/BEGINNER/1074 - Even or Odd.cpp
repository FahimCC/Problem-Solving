#include<iostream>
using namespace std;

int main()
{
    int n,test;

    cin>>test;

    while(test--)
    {
        cin>>n;
        if(n < 0 && n%2==0)
            cout<<"EVEN NEGATIVE"<<endl;
        else if(n < 0 && n%2!=0)
            cout<<"ODD NEGATIVE"<<endl;
        else if(n == 0)
            cout<<"NULL"<<endl;
        else if(n > 0 && n%2==0)
            cout<<"EVEN POSITIVE"<<endl;
        else
            cout<<"ODD POSITIVE"<<endl;
    }

    return 0;
}
