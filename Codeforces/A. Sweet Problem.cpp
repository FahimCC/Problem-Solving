#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,count,a[4];

    cin>>t;

    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);

        count = 0;
        while(1)
        {
            if((a[0]==0 && a[1]==0) || (a[0]==0 && a[2]==0) || (a[2]==0 && a[1]==0))
                break;

            cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<count<<endl;
            if(a[2]>=1 && a[1]>=1)
            {
                a[2]--;
                a[1]--;
            }
            else if(a[0]>=1 && a[2]>=1)
            {
                a[0]--;
                a[2]--;
            }
            else if(a[0]>=1 && a[1]>=1)
            {
                a[0]--;
                a[1]--;
            }
            sort(a,a+3);
            count++;
        }
        cout<<count<<endl;
    }


    return 0;
}
