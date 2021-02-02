#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, maxx, count;
    char c;

    cin>>n>>d;
    int win[d+1] = {0};

    for(int i=1;i<=d;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>c;
            if(c == '0')
            {
                win[i] = 1;
            }
        }
    }

    count = 0;
    maxx = 0;
    for(int i=1;i<=d;i++)
    {
        //cout<<win[i]<<endl;
        if(win[i] == 1)
        {
            count++;
            maxx = max(maxx,count);
        }

        else
        {
            count = 0;
        }

    }
    cout<<maxx<<endl;

    return 0;
}
