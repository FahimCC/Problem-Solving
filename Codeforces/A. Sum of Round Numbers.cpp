#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;

        int a[100000],i = 1;
        while(n != 0)
        {
            if(n>= 0 && n<=10)
            {
                a[i++] = n;
                n = 0;
            }
            else if(n>=11 && n<=99)
            {
                a[i++] = (n/10)*10;
                n = n % 10;
            }
            else if(n>=100 && n<=999)
            {
                a[i++] = (n/100)*100;
                n = n % 100;
            }
            else if(n>=1000 && n<=9999)
            {
                a[i++] = (n/1000)*1000;
                n = n % 1000;
            }
            else
            {
                a[i++] = n;
                n = 0;
            }
        }
        cout<<--i<<endl;
        for(int j=1;j<=i;j++)
            cout<<a[j]<<" ";
        cout<<endl;
    }

    return 0;
}
