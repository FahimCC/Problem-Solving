#include<iostream>
using namespace std;

int main()
{
    int n,i,a[100000],b[100000],j,k = 0,min=2147483647,f = 1;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                f = 2;
                if((j-i) < 0)
                    b[k++] =(-1)*(j-i);
                else
                    b[k++] =(j-i);
            }
        }
    }

    for(i=0;i<k;i++)
    {
        if(b[i] < min)
            min = b[i];
    }
    if(f != 1)
        cout<<min<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}
