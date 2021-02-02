#include<iostream>
using namespace std;

int main()
{
    int n,count = 0;

    cin>>n;
    while(n != 1)
    {
        if(n/100 == 0)
        {
            count++;
            n = n/100;
        }
        else if(n%20 == 0)
        {
            count++;
            n = n/20;
        }
        else if(n%10 == 0)
        {
            count++;
            n = n/10;
        }
        else if(n%5 == 0)
        {
            count++;
            n = n/5;
        }
        else if(n%1 == 0)
        {
            count++;
            n = n/1;
        }
        cout<<n<<endl;
    }

    cout<<count<<endl;
    return 0;
}
