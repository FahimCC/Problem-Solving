#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x,flag = 0;
    vector <int >s;
    vector <int >::reverse_iterator rit;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.push_back(x);
    }

    sort(s.begin(),s.end());

    for(rit=s.rbegin();rit!=s.rend();rit++)
    {
        cout<<*rit<<endl;
        if(*rit == (sqrt(*rit)*sqrt(*rit)))
        {
            if(find(s.begin(),s.begin()+s.size(),sqrt(*rit)) == 1)
            {
                cout<<sqrt(*rit)<<endl;
                break;
            }
        }
    }


    return 0;
}
