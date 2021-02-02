#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,count = 0;

    cin>>a>>b;

    vector<int> vec;
    vector<int> ::reverse_iterator rit;

    vec.push_back(b);
    while(b != 0)
    {
        if(b % 10 == 1)
        {
            b = b - 1;
            b = b / 10;
        }
        else if(b%2 != 0)
        {
            break;
        }
        else
        {
            b = b / 2;
        }

        vec.push_back(b);

        if(a == b)
        {
            break;
        }
    }

    if(a == b)
    {
        cout<<"YES"<<endl;
        cout<<vec.size()<<endl;
        for(rit=vec.rbegin();rit!=vec.rend();rit++)
            cout<<*rit<<" ";
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}
