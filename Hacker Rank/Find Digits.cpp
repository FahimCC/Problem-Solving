#include<iostream>
using namespace std;

int main()
{
    long long n,temp,r;
    int test,count;
    cin>>test;

    while(test--)
    {
        cin>>n;
        temp = n;
        count = 0;
        while(temp != 0)
        {
            r = (int)temp%10;
            temp = temp/10;
            cout<<n<<" "<<r<<endl;
            if(r==0)
                continue;
            if(n%r==0)
                count++;
        }
        cout<<count<<endl;
    }

    return 0;
}
