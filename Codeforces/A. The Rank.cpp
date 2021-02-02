#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    int n,x,sum,thomas_mark;
    multiset<int>s;
    multiset<int>::reverse_iterator rit;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        sum = 0;
        for(int j=1;j<=4;j++)
        {
            cin>>x;
            sum = sum + x;
            if(i == 1)
                thomas_mark = sum;
        }
        //cout<<i<<" "<<sum<<endl;
        s.insert(sum);
    }

    int i=1;
    for(rit=s.rbegin();rit!=s.rend();rit++,i++)
    {
        if(*rit == thomas_mark)
        {
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}
