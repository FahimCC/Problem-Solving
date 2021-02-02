#include<iostream>
using namespace std;

int main()
{
    int test,m,c,countm = 0,countc = 0;

    cin>>test;

    while(test--)
    {
        cin>>m>>c;

        if(m > c)
            countm++;
        else if(m < c)
            countc++;
    }
    if(countm > countc)
        cout<<"Mishka"<<endl;
    else if(countm < countc)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;

    return 0;
}
