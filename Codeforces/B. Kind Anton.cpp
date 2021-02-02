#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n,x,y,flag1,flag2;

    cin>>test;

    while(test--)
    {
        int a[100001]={0},b[100001]={0};
        cin>>n;

        for(int i=1;i<=n;i++)
            cin>>a[i];

        for(int i=1;i<=n;i++)
            cin>>b[i];

        flag1 = 0;
        flag2 = 2 ;
        for(int i=n;i>=1;i--)
        {
            if(a[i] == b[i])
                continue;
            else if((a[i-1]==0) || (a[i]>0&&a[i-1]>0&&b[i]<=0) || (a[i]<0&&a[i-1]<0&&b[i]>=0))
            {
                flag1 = 1;
                break;
            }
        }

        for(int i=1;i<=n;i++)
        {
            if(a[i] == b[i])
                continue;
            else if((a[i-1]==0) || (a[i]>0&&a[i+1]>0&&b[i]<=0) || (a[i]<0&&a[i+1]<0&&b[i]>=0))
            {
                flag2 = 1;
                break;
            }
        }

        if(flag1 == 1 && flag2 == 1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}
