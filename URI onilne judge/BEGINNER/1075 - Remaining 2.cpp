#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n;
    cin>>n;
    for(int i=2;i<10000;i++)
    {
        if(i%n == 2)
            cout<<i<<endl;
    }

    return 0;
}
