#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    float n;
    cin>>n;

    if(n>=0.00 && 2000.00>=n)
    {
        cout<<"Isento"<<endl;
    }
    else if(n>=2000.01 && 3000.00>=n)
    {
        cout<<"R$ "<<fixed<<setprecision(2)<<((n*8)/100.00)<<endl;
    }
    else if(n>=3000.01 && 4500.00>=n)
    {
        cout<<"R$ "<<fixed<<setprecision(2)<<((n*18)/1000.00)<<endl;
    }
    else if(n>4500.00)
    {
        cout<<"R$ "<<fixed<<setprecision(2)<<((n*28)/1000.00)<<endl;
    }

    return 0;
}
