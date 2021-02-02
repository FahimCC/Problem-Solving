#include<bits/stdc++.h>
using namespace std;

int main ()
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

        vector<int>vec;
        vector<int>::iterator it;;

        if((n&1) && !(k&1) || (n < k))
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            if(n == k)
            {
                for(int i=1;i<=k;i++)
                    vec.push_back(1);
            }

            else if(!(n&1))
            {
                for(int i=1;i<k;i++)
                {
                    vec.push_back(2);
                }

                vec.push_back(n - (2*(k-1)));
            }
            else
            {
                for(int i=1;i<k;i++)
                {
                    vec.push_back(1);
                }

                vec.push_back(n - (1*(k-1)));
            }
            for(int i=0;i<vec.size();i++)
            {
                cout<<vec[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}

