#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[102];

    scanf("%s",s);
    int flag = 0, length = strlen(s);

    for(int i=0;i<length;i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            flag = 1;
            break;
        }
    }

    printf((flag == 1)? "YES\n" : "NO\n");

    return 0;
}
