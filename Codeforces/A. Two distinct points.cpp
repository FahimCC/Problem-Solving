#include<iostream>
using namespace std;

int main()
{
    int test,l1,l2,r1,r2;

    cin>>test;

    while(test--)
    {
        cin>>l1>>r1>>l2>>r2;

        if(r1 == r2)
            cout<<r1-1<<" "<<r2<<endl;
        else
            cout<<r1-1<<" "<<r2-1<<endl;
    }



    return 0;
}
