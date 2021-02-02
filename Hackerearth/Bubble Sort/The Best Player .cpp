#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s[30];
    int n,t,fanq[1010],flag,x,y;

    scanf("%d%d",&n,&t);

    for(int i=1;i<=n;i++)
    {
        cin>>s[i]>>fanq[i];
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            if(fanq[j] < fanq[j+1])
            {
                swap(s[j],s[j+1]);
                swap(fanq[j],fanq[j+1]);
            }
        }
    }

    flag = 1;
    for(int i=1;i<n;i++)
    {
        if(flag == 1 && fanq[i] == fanq[i+1])
        {
            x = i;
            flag = 2;
        }
        else if(flag == 2 && fanq[i] != fanq[i+1])
        {
            y = i;
            flag = 3;
            break;
        }
    }
    if(flag == 2)
        y = x+1;

    sort(s+x,s+y);

    for(int i=1;i<=t;i++)
    {
        cout<<s[i]<<endl;
    }

    return 0;
}
