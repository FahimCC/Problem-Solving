#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test, n, x;
    long long yasirTaste, min, maxx;

    cin>>test;

    while(test--)
    {
        cin>>n;
        yasirTaste = 0;
        min = INT_MAX;
        maxx = INT_MIN;
        vector<int>vec;
        while(n--)
        {
            cin>>x;
            vec.push_back(x);
            if(min > x)
                min = x;
            else if(maxx < x)
                maxx = x;

            yasirTaste = yasirTaste + x;
        }

        int adelTaste = max(maxx,max(yasirTaste-vec.front(),yasirTaste-vec.back()));

        if(yasirTaste > adelTaste)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
