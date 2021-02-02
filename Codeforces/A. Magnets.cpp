#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector <string> vec;
    int test, count = 1;
    string x;

    cin>>test;
    //cin.ignore();

    cin>>x;
    vec.push_back(x);
    for(int i=1;i<test;i++)
    {
        cin>>x;
        vec.push_back(x);
        if(vec[i] != vec[i-1])
            count++;
    }

    cout<<count<<endl;

    return 0;
}
