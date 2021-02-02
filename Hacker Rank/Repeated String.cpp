#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[103];
    scanf("%s", s);

    long long n;
    scanf("%lld",&n);

    int count = 0, length = strlen(s);

    for(int i=0;i<length;i++)
    {
        if(s[i] == 'a')
            count++;
    }

    if(length == count)
    {
        printf("%lld\n", n);
        return 0;
    }
    long long x = (n/length);
    //cout<<x<<" "<<length<<endl;
    x = x * count;
    //cout<<count<<endl<<x<<endl;

    long long y = n%length;

    count = 0;
    for(int i=0;i<y;i++)
    {
        if(s[i] == 'a')
            count++;
    }
    //cout<<count<<endl;

    printf("%lld\n",x+count);

    return 0;
}
