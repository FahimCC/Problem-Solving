#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;
    scanf("%d",&test);

    while(test--)
    {
        int n,sum = 0;
        scanf("%d",&n);
        getchar();

        char a[3002] = {0};
        for(int i=0;i<n;i++)
        {
            scanf("%c",&a[i]);
            sum = sum + (a[i]-'0');
        }

        if(!(sum & 1))
        {
            puts(a);
        }
        else
        {
            int flag = 0;
            for(int i=1;i<n;i++)
            {
                if(flag ==0 && a[i]=='1' || a[i]=='3' || a[i]=='5' || a[i]=='7' || a[i]=='9')
                {
                    flag = 1;
                    continue;
                }
                printf("%c",a[i]);
            }
            puts("");
        }
    }

    return 0;
}
