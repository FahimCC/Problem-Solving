#include<iostream>
using namespace std;

int main()
{
    int c1,c2,m1,a,b,test;

    cin>>test;
    while(test--)
    {
        cin>>c1>>c2>>m1;

        a = c1 - m1;
        b = c2 - m1;

        if(a < 0)
            a = (-1)*a;
        if(b < 0)
            b = (-1)*b;

        if(a < b)
            cout<<"Cat A"<<endl;
        else if(b < a)
            cout<<"Cat B"<<endl;
        else
            cout<<"Mouse C"<<endl;
    }

    return 0;
}
