#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n,a,b,x;

    cin>>test;

    while(test--)
    {
        cin>>n>>a>>b;
        vector<char>vec;
        vector<char>::iterator it;

        while(n != 0)
        {
            for(char ch='a';ch!=('a'+b);ch++)
            {
                if(n == 0)
                    break;
                //vec.push_back(ch);
                cout<<ch;
                n--;
            }
        }
        for(it=vec.begin();it!=vec.end();it++)
        {
            cout<<*it;
        }
        cout<<endl;
    }

    return 0;
}

