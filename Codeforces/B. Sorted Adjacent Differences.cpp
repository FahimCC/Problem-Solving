#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100000],test,n,first,last;

    cin>>test;

    while(test--)
    {
        cin>>n;
        list<int> List;
        list<int>::iterator it;

        for(int i=1;i<=n;i++)
            cin>>a[i];

        sort(a+1,a+1+n);

        for(int i=1;i<=n;i++)
        {
            if(i & 1)
                List.push_front(a[i]);
            else
                List.push_back(a[i]);
        }

        for(it=List.begin();it!=List.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;

    }
    return 0;
}
