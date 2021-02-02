#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[505];

    cin.getline(a,505);
    int l = strlen(a);

    if(l > 80)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;
}
