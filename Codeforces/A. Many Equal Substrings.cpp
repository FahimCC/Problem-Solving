#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    char a[55];

    cin>>n>>k;
    cin.ignore();

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    while(k--)
    {
       for(int i=0;i<n;i++)
        {
            cout<<a[i];
        }
    }
    cout<<endl;

    return 0;
}
