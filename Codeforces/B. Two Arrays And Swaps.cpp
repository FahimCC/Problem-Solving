#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin>>test;

    while(test--)
    {
        int n,k;
        cin>>n>>k;

        int A[35]={0},B[35]={0},sum1 = 0, sum2 = 0;

        for(int i=1;i<=n;i++)
        {
            cin>>A[i];
            sum1 += A[i];
        }

        for(int i=1;i<=n;i++)
        {
            cin>>B[i];
            sum2 += B[i];
        }

        if(sum1 < sum2)
            for(int i=1;k!=0;i++,k--)
            {
                int max = 0,kk=0,x;

                if(max < B[1])
                    max = B[1];
                for(int j=i;j<=n;j+=i)
                {
                    if(max < B[j])
                    {
                        max = B[j];
                        kk = j;
                    }
                }
                sum1 -= A[i];
                //cout<<A[i]<<" ";
                sum1 += max;
                swap(A[i],B[kk]);
                //cout<<max<<endl;
            }

        cout<<sum1<<endl;
    }

    return 0;
}
