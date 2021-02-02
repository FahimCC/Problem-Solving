#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x[1010];
    cin>>n;

    set<int> s;
    vector<int> vec;
    vector<int> ::reverse_iterator rit;


    for(int i=1;i<=n;i++)
    {
        cin>>x[i];
    }

    for(int i=n;i>=1;i--)
    {
        pair< set<int>::iterator,bool >p;
        p = s.insert(x[i]);
        if(p.second == true)
            vec.push_back(x[i]);
    }

    cout<<vec.size()<<endl;
    for(rit=vec.rbegin();rit!=vec.rend();rit++)
    {
        cout<<*rit<<" ";
    }
    cout<<endl;

    return 0;
}

