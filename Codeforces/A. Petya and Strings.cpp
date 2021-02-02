#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    cin>>a>>b;

    int i = 0;
    while(a[i])
    {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
        i++;
    }

    if(a < b)
        cout<<"-1"<<endl;
    else if(a == b)
        cout<<"0"<<endl;
    else
        cout<<"1"<<endl;


    return 0;
}
