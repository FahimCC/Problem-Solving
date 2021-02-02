#include<iostream>

using namespace std;

int main()
{
    int a[100000],i,n,j,aa[100000];

    cin>>n;

    for(i=0; i<n; i++)
        cin>>a[i];

        int k=0;
    for(int j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            if(a[j]-a[i]==1 || a[j]-a[i]==0 && k<=5)
                aa[k++]=a[j]-a[i];
        }
    }
    cout<<k<<endl;




    return 0;
}
