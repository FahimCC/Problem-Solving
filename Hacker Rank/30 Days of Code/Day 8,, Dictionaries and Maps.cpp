#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif*/

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int test;
    cin >> test;

    int n;
    string name;

    map <string, int> M;
    map <string, int>::iterator it;

    for (int i = 1 ; i <= test; i++)
    {
        cin >> name >> n;
        M[name] = n;
    }

    while (cin >> name)
    {
        it = M.find(name);
        if (it != M.end())
            cout << it->first << "=" << it->second << endl;
        else
            cout << "Not found" << endl;
    }

    return 0;
}
