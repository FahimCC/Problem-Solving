#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,test;

    multimap<int, string> m;
    multimap<int, string>::iterator it;

    cin>>test;

    while(test--)
    {
        cin>>s>>n;

        m.insert(make_pair(n,s));
        //m[n] = s;
    }

    it = m.begin();
    cout<<it->second<<endl;

    return 0;
}
