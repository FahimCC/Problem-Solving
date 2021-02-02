#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    char b,a[100000];
    int l;


    while(scanf("%c %s",&b,a)==2)
    {
        l = strlen(a);

        for(int i=0;i<l;i++)
        {
            if(a[i] != b)
                cout<<a[i];
        }
        puts("");
    }

    return 0;
}
