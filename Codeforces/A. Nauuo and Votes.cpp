#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y,z;

    cin>>x>>y>>z;

    if(x == 0 && y == 0)
        cout<<"?"<<endl;
    else if(x < y)
        cout<<"-"<<endl;
    else if(x > y)
        cout<<"+"<<endl;
    else
        cout<<"0"<<endl;


    return 0;
}
