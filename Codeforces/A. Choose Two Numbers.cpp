#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A[105],B[105],n,m,sum;

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>A[i];
    set< int >s1(A,A+n);

    cin>>m;
    for(int i=0;i<m;i++)
        cin>>B[i];
    set< int >s2(B,B+m);

    for(int i=0;i<n;i++)
    {
        sum = 0;
        for(int j=0;j<m;j++)
        {
            sum = A[i]+B[j];
            pair< set<int>::iterator,bool >p;
            p = s1.insert(sum);
            pair< set<int>::iterator,bool >q;
            q = s2.insert(sum);

            //cout<<sum<<" "<<p.second<<" "<<q.second<<endl;
            if(p.second == true && q.second == true)
            {
                cout<<A[i]<<" "<<B[j]<<endl;
                goto exit;
            }
        }
    }
    exit:
    return 0;
}
