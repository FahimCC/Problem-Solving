#include<iostream>

using namespace std;

int main()
{
    int a[100010],k,n;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cin>>k;

    for(int i=0;i<n;i++)
    {
        if(a[i] == k)
        {
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}
