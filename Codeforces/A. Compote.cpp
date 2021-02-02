#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,min;

    cin>>a>>b>>c;

    a = a/1.0;
    b = b/2.0;
    c = c/4.0;

    min = a;

    if(min > b)
        min = b;
    if(min > c)
        min = c;

    cout<<(1*min)+(2*min)+(4*min)<<endl;

    return 0;
}
