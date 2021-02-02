#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[110];
    int l,flag,count1,count0;

    scanf("%s",a);
    l = strlen(a);

    count1 = 0,count0 = 0,flag = 0;
    for(int i=0;i<l;i++)
    {
        if(a[i] == '1')
        {
            count1++;
            count0 = 0;
        }
        else if(a[i] == '0')
        {
            count0++;
            count1 = 0;
        }


        if(count0==7 || count1==7)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}
