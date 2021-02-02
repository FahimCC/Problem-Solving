#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test, checkPoint, L[i], C[i];

    cin>>test;

    while(test--)
    {
        cin>>checkPoint;

        for(int i=0;i<n;i++)
        {
             cin>>C[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>L[i];
        }

        for(int i=1;i<n;i++)
        {
            if(C[i-1] < C[i])
            {
                sum = sum + L[i-1];
            }
            else
            {
                sum = sum + L[i-1];

            }
        }

    }

    return 0;
}
