#include<bits/stdc++.h>
using namespace std;

int main()
{
    char S[110];

    cin.getline(S,110);
    int l = strlen(S);


    set<char> s(S,S+l);

    if(s.size()%2 == 0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;


    return 0;
}
