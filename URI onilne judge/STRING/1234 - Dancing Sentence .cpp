#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c[55];
    int l;


    while(cin.getline(c,55))
    {
        l = strlen(c);
        for(int i=0;i<l;i=i+2)
        {
            if(c[i] != ' ')
                c[i] = toupper(c[i]);
        }
        cout<<c<<endl;
    }

    return 0;
}
