#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    multimap<int,int> m;
    multimap<int,int>::iterator it;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        m.insert(make_pair(x, i));
    }

    for(it=m.begin();it != m.end() ;it++)
    {
        cout<<it->second<<" ";
    }


    return 0;
}
