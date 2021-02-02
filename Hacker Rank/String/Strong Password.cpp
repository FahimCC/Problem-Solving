#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,condition = 0,ans = 0,a=0,b=1,c=1,d=1,e=1;
    char s[105];

    cin>>n;
    cin.ignore();
    if(n >= 6)
        a=1;
    else
        ans = 6 - n;

    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]>='0' && s[i]<='9')
            b=0;
        else if(s[i]>='a' && s[i]<='z')
            c=0;
        else if(s[i]>='A' && s[i]<='Z')
            d=0;
        else if(s[i]=='!'||s[i]=='@'||s[i]=='$'||s[i]=='%'||s[i]=='^'||s[i]=='&'||s[i]=='*'||s[i]=='('||s[i]==')'||s[i]=='-'||s[i]=='+'||s[i]=='#')
            e=0;
    }
    condition = b+c+d+e;
    //cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<condition<<" "<<ans<<endl;

    if(ans >= condition)
        cout<<ans<<endl;
    else if(ans < condition)
        cout<<condition<<endl;
    return 0;
}
