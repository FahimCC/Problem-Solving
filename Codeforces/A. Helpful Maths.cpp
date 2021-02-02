#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<char>s;
    multiset<char>::iterator it;

    char a[100];
    int l;

    cin.getline(a,100);

    l = strlen(a);

    for(int i=0;i<l;i=i+2)
    {
        s.insert(a[i]);
    }
    //sort(s.begin(),vec.endl());

    for(it=s.begin();it!=s.end();it++)
    {
        if(it!=s.begin())
            cout<<"+";
        cout<<*it;
    }
    cout<<endl;

    return 0;
}
