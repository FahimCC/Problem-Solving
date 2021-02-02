#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n,x,ar;

    cin>>test;

    while(test--)
    {
        cin>>n>>x;
        set<int>s;
        set<int>::iterator it;

        for(int i=1;i<=n;i++)
        {
            cin>>ar;
            s.insert(ar);
        }
        for(int i=1;i<=x;i++)
        {
            pair< set<int>::iterator,bool >p;
            p = s.insert(i);
            if(p.second == false)
                x++;
        }

//        for(it=s.begin();it!=s.end();it++)
//        {
//            cout<<*it<<endl;
//        }
//        cout<<endl;

        while(s.find(x) != s.end())
            x++;

        cout<<x-1<<endl;
    }

    return 0;
}
