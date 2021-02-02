#include<iostream>
using namespace std;

int main()
{
    int test,n,r,flag;

    cin>>test;

    while(test--)
    {
        cin>>n;

        if(n%21 == 0)
        {
            cout<<"The streak is broken!"<<endl;
        }
        else
        {
            flag = 0;
            while(n!=0)
            {
                r = n % 10;
                if(flag == 1 && r == 2)
                {
                    cout<<"The streak is broken!"<<endl;
                    break;
                }

                if(r == 1)
                    flag = 1;
                else
                    flag = 0;

                n = n / 10;
            }
            if(n == 0)
                cout<<"The streak lives still in our heart!"<<endl;
        }
    }

    return 0;
}
