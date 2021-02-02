#include<iostream>
using namespace std;

int main()
{
    unsigned long long a,b,c;

    cin>>a>>b>>c;

    cout<<min((a+a+b+b),min((a+b+c),min((2*(a+c)),(2*(b+c)))))<<endl;

    return 0 ;
}
