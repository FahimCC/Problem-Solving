#include<iostream>
using namespace std;

int main()
{
    char a[1010][7],c;
    int test,l,flag = 0,f = 0;

    cin>>test;
    cin.ignore();

    for(int i=1;i<=test;i++)
        for(int j=1;j<=5;j++)
            cin>>a[i][j];

    for(int i=1;i<=test;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(a[i][j] == 'O')
            {
                flag++;
                //cout<<"Fahim"<<endl;
            }

            else
                flag = 0;

            if(flag == 2)
            {
                f = 1;
                a[i][j] = '+';
                a[i][j-1] = '+';
                break;
            }
        }
        if(f == 1)
            break;
        flag = 0;

    }

    if(f == 1)
    {
        cout<<"YES"<<endl;
        for(int i=1;i<=test;i++)
        {
            for(int j=1;j<=5;j++)
                cout<<a[i][j];
            cout<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}
