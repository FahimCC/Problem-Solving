#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int l,i,test,k;
    char a[100000],b[100000];
    cin>>test;
    cin.ignore();

    while(test--)
    {
        k = 0;
        cin.getline(a,100000);
        l = strlen(a);
        for(i=0;i<l;i++)
        {
            if(i%2==0)
                cout<<a[i];
            else
                b[k++] = a[i];
        }
        cout<<" ";
        for(i=0;i<k;i++)
        {
            cout<<b[i];
        }
        cout<<endl;
    }

    return 0;
}
