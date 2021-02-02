#include<iostream>
using namespace std;
int main()
{
    int x,test,count = 0,counter = 0;
    cin>>test;
    while(test--)
    {
        cin>>x;
        if(x >= 10 && x <= 20)
            count++;
        else
            counter++;
    }
    cout<<count<<" in\n"<<counter<<" out"<<endl;
    return 0;
}
