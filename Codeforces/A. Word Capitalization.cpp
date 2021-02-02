#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    char a[1010];

    cin.getline(a,1010);
    //int l = strlen(a);

    a[0] = toupper(a[0]);

//    if(!(a[0]>=65 && a[0]<=90))
//        a[0] = a[0] + 32;

    cout<<a<<endl;

    return 0;
}
