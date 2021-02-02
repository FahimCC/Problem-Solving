#include<iostream>
using namespace std;

int main()
{
    int test,n,i,h;
    cin>>test;

    while(test--)
    {
        h = 1;
        cin>>n;

        if(n == 0)
        {
            cout<<"1"<<endl;
            continue;
        }

        for(i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                h = 2*h;
            }

            else if(i%2==0)
            {
                 h = h+1;
            }
        }
        cout<<h<<endl;
    }

    return 0;
}
