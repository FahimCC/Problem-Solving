#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int test,cnt;
    double dividation,a,b;

    cin>>test;
    cnt = 0;
    while(test--)
    {
        cin>>a>>b;

        if(a < b)
        {
            a = a+b;
            b = a-b;
            a = a-b;
        }
        dividation = (float)a/b;

        if(1.7 >= dividation && 1.6 <= dividation)
        {
            cnt++;
        }

    }
    cout<<cnt<<endl;

    return 0;
}
