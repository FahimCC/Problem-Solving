#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[105], t[105];
    int k;

    scanf("%s", s);
    scanf("%s", t);
    scanf("%d", &k);

    int sLength = strlen(s);
    int tLength = strlen(t);
    int Length = max(sLength,tLength);
    int flag = 0;

    for(int i=0;i<Length;i++)
    {
        //cout<<s[i]<<" ";
        if(s[i] != t[i])
        {
            int x = (sLength-i)+(tLength-i);
            //cout<<i<<" "<<sLength-i<<" "<<tLength-i<<" ";
            //cout<<x<<endl;
            if((sLength+tLength) <= k)
                flag = 0;
            else if(k-x>=0)
            {
                if((k-x) & 1)
                    flag = 1;
                else
                    flag = 0;
            }
            else
                flag = 1;

            break;
        }
    }
    if(flag == 0)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
