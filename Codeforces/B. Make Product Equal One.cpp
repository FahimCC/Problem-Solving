#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,flag = 0,negetiveCount = 0,zeroCount = 0;
    unsigned long long moveCount = 0;
    int a[100010];

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i] != 1 || a[i] != -1)
        {
            if(a[i] == 0)
            {
                zeroCount++;
                moveCount = moveCount + abs((a[i] - 1));
            }

            else if(a[i] < 0)
            {
                negetiveCount++;
                moveCount = moveCount + abs((a[i] + 1));
            }
            else
            {
                moveCount = moveCount + abs((a[i] - 1));
            }
        }
        //cout<<moveCount<<endl;
    }


    if(negetiveCount%2 == 0)
    {
        cout<<moveCount<<endl;
    }
    else
    {
        if(zeroCount == 0)
            cout<<moveCount+2<<endl;
        else
           cout<<moveCount<<endl;
    }

    return 0;
}
