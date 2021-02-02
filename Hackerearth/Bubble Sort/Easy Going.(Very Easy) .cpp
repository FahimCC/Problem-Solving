#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int test,a[1010],n,m,max_sum,min_sum,diff;

    cin>>test;

    while(test--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        diff = n - m;
        max_sum = 0,min_sum = 0;
        sort(a,a+n);

        for(int i=0;i<diff;i++)
        {
            min_sum = min_sum + a[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            if(diff == 0)
                break;
            max_sum = max_sum + a[i];
            diff--;
        }
        cout<<max_sum - min_sum<<endl;
    }

    return 0;
}
