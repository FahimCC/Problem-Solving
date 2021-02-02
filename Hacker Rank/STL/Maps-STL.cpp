#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,x,mark;
    string name;

    map<string,int>m;
    map<string,int>::iterator it;

    cin>>test;
    while(test--)
    {
        cin>>x>>name;
        if(x == 1)
        {
            cin>>mark;
            m[name] += mark;
        }
        else if(x == 2)
            m[name] = 0;
        else
            cout<<m[name]<<endl;
    }



    return 0;
}
