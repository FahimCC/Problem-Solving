#include<iostream>
using namespace std;

int main()
{
    char a;
    int test,A = 0,D = 0;

    cin>>test;
    cin.ignore();
    for(int i=1;i<=test;i++)
    {
        cin>>a;
        if(a == 'A')
            A++;
        else
            D++;
    }

    if(A < D)
        cout<<"Danik"<<endl;
    else if(A > D)
        cout<<"Anton"<<endl;
    else
        cout<<"Friendship"<<endl;

    return 0;
}
