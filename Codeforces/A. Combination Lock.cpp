#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,l,x,y,sum = 0;
    char a[1010],ar[1010];

    cin>>n;
    cin.ignore();

    cin.getline(a,1010);
    cin.getline(ar,1010);

    l = strlen(a);

    for(int i=0;i<l;i++)
    {
        x = a[i]-'0';
        y = ar[i] - '0';

        //cout<<abs(x-y)<<" "<<abs(x-(y+10))<<" "<<abs(y-(x+10))<<endl;
        sum = sum + min(abs(x-y),min(abs(x-(y+10)),abs(y-(x+10))));
    }

    cout<<sum<<endl;

    return 0;
}
