#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,a[110],p,q,m;


    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    list<int >lis(a,a+n);
    list<int >::iterator it;
    lis.unique();

    l = lis.size();
    p = lis.front();
    q = lis.back();
    it = lis.begin();
    it++;

    if(l == 1)
        cout<<"0"<<endl;
    else if(l == 2)
    {
        m = p + q;
        if(m%2 == 0)
        {
            cout<<q - (m/2)<<endl;
        }
        else
        {
            cout<<q-p<<endl;
        }
    }
    else if(l == 3)
    {
        if(abs(p-*it) == abs(q-*it))
            cout<<abs(p-*it)<<endl;
        else
            cout<<"-1"<<endl;
    }
    else
        cout<<"-1"<<endl;

    return 0;
}
