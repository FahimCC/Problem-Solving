#include<iostream>
using namespace std;

int main()
{
    int n;
    long a[100000],sum = 0,max,min,ans;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }
    max = 0;
    min = 10000000000000;

    for(int i=1;i<=n;i++)
    {
        ans = sum - a[i];

        if(max < ans)
            max = ans;
        if(min > ans)
            min = ans;
    }

    cout<<min<<" "<<max<<endl;
    return 0;
}
