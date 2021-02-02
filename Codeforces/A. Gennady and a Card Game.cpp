#include<iostream>
using namespace std;

int main()
{
    int flag = 0;
    char c,c1,c2;

    cin>>c1>>c2;
    cin.ignore();

    for(int i=1;i<=10;i++)
    {
        cin>>c;
        if(c == c1 || c == c2)
        {
            flag = 1;
        }
    }

    if(flag == 0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;
}
