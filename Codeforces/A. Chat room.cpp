#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[105];

    cin.getline(a,105);
    int l = strlen(a),f = 0;

    for(int i=0;i<l;i++)
    {
        if(a[i] == 'h' && f == 0)
        {
            f = 1;
        }
        else if(a[i] == 'e' && f == 1)
        {
            f = 2;
        }
        else if(a[i] == 'l' && f == 2)
        {
            f = 3;
        }
        else if(a[i] == 'l' && f == 3)
        {
            f = 4;
        }
        else if(a[i] == 'o' && f == 4)
        {
            f = 5;
            break;
        }
    }

    if(f == 5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
