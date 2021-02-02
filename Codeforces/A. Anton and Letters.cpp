#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<char>s;

    char a[1010];

    cin.getline(a,1010);
    int l = strlen(a);

    for(int i=0;i<l;i++)
    {
        if(a[i]>=97 && a[i]<=122)
            s.insert(a[i]);
    }

    cout<<s.size()<<endl;

    return 0;
}
