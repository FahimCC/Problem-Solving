#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int test,l;
    char a[101];

    cin>>test;
    cin.ignore();
    while(test--)
    {
        cin.getline(a,101);
        l = strlen(a);

        if(l > 10)
        {
            cout<<a[0]<<l - 2<<a[l-1];
        }
        else
            cout<<a;

        cout<<endl;
    }


    return 0;
}
