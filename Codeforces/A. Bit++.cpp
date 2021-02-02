#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test,X = 0;
    string s;

    cin>>test;

    while(test--)
    {
        cin>>s;

        if(s == "++X")
        {
            ++X;
        }
        else if(s == "X++")
        {
            X++;
        }
        else if(s == "X--")
        {
            X--;
        }
        else if(s == "--X")
        {
            --X;
        }
    }

    cout<<X<<endl;

    return 0;
}
