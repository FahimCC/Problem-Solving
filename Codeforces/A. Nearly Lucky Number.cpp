#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char a[105];

    cin.getline(a,105);

    int l,flag = 0;
    l = strlen(a);

    if(l == 1 && ((a[0] == '7') || (a[0] == '4')))
    {
        cout<<"NO"<<endl;
        return 0;
    }

    for(int i=0;i<l;i++)
    {
        if(a[i]!='7' && a[i]!='4')
        {
            flag = 1;
            break;
        }
    }

    //cout<<flag<<endl;
    if(flag == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

