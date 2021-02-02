#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char a[100010];

    cin.getline(a,100010);

    int l,f = 0,ff = 0;

    l = strlen(a);

    for(int i=1;i<l;i++)
    {
        if(a[i-1] == 'A' && a[i] == 'B')
        {
            i++;
            f = 1;
        }
        if(a[i-1] == 'B' && a[i] == 'A' && f == 1)
        {
            i++;
            f = 2;
        }

        if(a[i-1] == 'B' && a[i] == 'A')
        {
            i++;
            ff = 1;
        }
        if(a[i-1] == 'A' && a[i] == 'B' && ff == 1)
        {
            i++;
            ff = 2;
        }

        if(f == 2 || ff == 2)
            break;
    }

    if(f == 2 && ff == 2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
