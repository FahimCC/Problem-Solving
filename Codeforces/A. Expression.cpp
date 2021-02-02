#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c,max = 0,m;

    cin>>a>>b>>c;

    m = a*(b+c);

    if(max < m)
        max = m;

    m = a+(b*c);

    if(max < m)
        max = m;

    m = a*(b*c);

    if(max < m)
        max = m;

    m = (a+b)*c;

    if(max < m)
        max = m;

    m = (a+b)+c;

    if(max < m)
        max = m;

    cout<<max<<endl;

    return 0;
}
