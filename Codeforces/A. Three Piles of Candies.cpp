#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long a,b,c;
    int n;

    cin>>n;

    while(n--)
    {
        cin>>a>>b>>c;
        cout<<(a+b+c)/2<<endl;
    }


    return 0;
}
