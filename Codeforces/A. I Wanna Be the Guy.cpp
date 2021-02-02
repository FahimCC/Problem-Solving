#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    int l,x,y,m;

    cin>>l;
    set<int>s;

    cin>>x;
    for(int j=1;j<=x;j++)
    {
        cin>>m;
        s.insert(m);
    }

    cin>>y;
    for(int j=1;j<=y;j++)
    {
        cin>>m;
            s.insert(m);
    }

    if(s.size() == l)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;


    return 0;
}
