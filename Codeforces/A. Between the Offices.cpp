#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,F = 0, S = 0;
    string s;

    cin>>n;
    cin>>s;

    l = s.size();
    for(int i=1;i<l;i++)
    {
        if(s[i-1] == 'S' && s[i] == 'F')
            S++;
        else if(s[i-1] == 'F' && s[i] == 'S')
            F++;

    }

    if(S > F)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
