#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,test,x;

    vector<int>vec;
    vector<int>::iterator it;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
    }

    cin>>test;
    while(test--)
    {
        cin>>x;
        it = lower_bound(vec.begin(),vec.end(),x);
        //cout<<*it<<" "<<x<<endl;
        if(*it == x)
            cout<<"Yes "<<it - vec.begin()+1<<endl;
        else
            cout<<"No "<<it - vec.begin()+1<<endl;
    }

    return 0;
}
