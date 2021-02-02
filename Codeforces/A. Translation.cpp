#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[105],b[105];

    cin.getline(a,105);
    cin.getline(b,105);

    int l = strlen(b);

    reverse(b,b+l);

    if(!strcmp(a,b))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
