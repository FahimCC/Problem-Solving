#include<iostream>
#include <string>
using namespace std;

int main()
{
    string a = "I hate ";
    string b = "I love ";
    string c = "that";
    string d = "it";

    //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

    int n;
    cin>>n;
    cin.ignore();

    for(int i=1;i<=n;i++)
    {
        if(i%2 != 0)
            cout<<a;
        else
            cout<<b;

        if(i == n)
            cout<<d;
        else
            cout<<c<<" ";
    }

    cout<<endl;

    return 0;
}
