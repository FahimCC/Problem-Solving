#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char a[105];

    cin.getline(a,105);

    int l,upper = 0,lower = 0;
    l = strlen(a);

    for(int i=0;i<l;i++)
    {
        if(a[i]>=65 && a[i]<=90)
            upper++;
        else
            lower++;
    }

    if(upper <= lower)
    {
        for(int i=0;i<l;i++)
        {
            a[i] = tolower(a[i]);
        }
    }
    else
    {
        for(int i=0;i<l;i++)
        {
            a[i] = toupper(a[i]);
        }
    }

    cout<<a<<endl;

    return 0;
}
