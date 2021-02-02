#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,l,flag;
    char s[100010];

    cin>>test;
    cin.ignore();
    while(test--)
    {
        cin>>s;
        l = strlen(s);
        flag = 1;
        for(int i=0;i<l;i++)
        {
            if(i == 0 && s[i] == '?')
            {
                if(s[i+1] == 'a')
                    s[i] = 'b';
                else if(s[i+1] == 'b')
                    s[i] = 'c';
                else if(s[i+1] == 'c')
                    s[i] = 'a';
                else if(s[i+1] == '?')
                    s[i] = 'a';
                else
                    s[i] = 'a';
            }

            else if(i == l-1 && s[l-1] == '?')
            {
                if(s[i-1] == 'a')
                    s[i] = 'b';
                else if(s[i-1] == 'b')
                    s[i] = 'c';
                else if(s[i-1] == 'c')
                    s[i] = 'a';
                else if(s[i-1] == '?')
                    s[i] = 'c';
            }

            else if(s[i] == '?')
            {
                if(s[i-1] == 'a' && s[i+1] == 'a')
                    s[i] = 'b';
                else if(s[i-1] == 'b' && s[i+1] == 'b')
                    s[i] = 'c';
                else if(s[i-1] == 'c' && s[i+1] == 'c')
                    s[i] = 'a';

                else if((s[i-1] == 'a' && s[i+1] == 'b')||((s[i-1] == 'b' && s[i+1] == 'a')))
                    s[i] = 'c';
                else if((s[i-1] == 'b' && s[i+1] == 'c')||((s[i-1] == 'c' && s[i+1] == 'b')))
                    s[i] = 'a';
                else if((s[i-1] == 'c' && s[i+1] == 'a')||((s[i-1] == 'a' && s[i+1] == 'c')))
                    s[i] = 'b';

                else if((s[i-1] == 'a' && s[i+1] == '?')||((s[i-1] == '?' && s[i+1] == 'a')))
                    s[i] = 'b';
                else if((s[i-1] == 'b' && s[i+1] == '?')||((s[i-1] == '?' && s[i+1] == 'b')))
                    s[i] = 'c';
                else if((s[i-1] == 'c' && s[i+1] == '?')||((s[i-1] == '?' && s[i+1] == 'c')))
                    s[i] = 'a';
            }
        }
        for(int i=1;i<l;i++)
        {
            if(s[i-1] == s[i])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
        {
//            for(int i=0;i<l;i++)
//                cout<<s[i];
            cout<<"-1"<<endl;
//            cout<<endl;
        }

        else
        {
            cout<<s<<endl;
        }


    }

    return 0;
}
