#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    long long n;

    cin>>test;

    while(test--)
    {
        cin>>n;
        long long x = n/2;
        x--;
        long long sumf = 0,sums = 0;
        for(int i=1;i<n;i++)
        {
            if(i <= x)
                sumf = sumf + pow(2,i);
            else
                sums = sums + pow(2,i);
            //cout<<sumf <<" "<<sums<<endl;
        }
        cout<<(sumf+pow(2,n) - sums)<<endl;
    }


    return 0;
}
