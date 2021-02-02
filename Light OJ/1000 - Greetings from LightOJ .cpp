#include<iostream>
using namespace std;

int main()
{
    int a,b,test,counter = 1;
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        cout<<"Case "<<counter++<<": "<<a+b<<endl;
    }

    return 0;
}
