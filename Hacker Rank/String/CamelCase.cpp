#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100010];
    int l,count = 1;

    cin.getline(s,100010);
    l = strlen(s);

    for(int i=0;i<l;i++)
    {
        if(s[i]>=64 && s[i]<=90)
            count++;
    }

    cout<<count<<endl;


    return 0;
}
