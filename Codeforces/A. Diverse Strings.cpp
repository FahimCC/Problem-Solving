#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[105];
    int test,l,flag;

    scanf("%d",&test);
    getchar();

    while(test--)
    {
        scanf("%s",a);

        l = strlen(a);

        sort(a,a+l);

        flag = 0;
        for(int i=0;i<l-1;i++)
        {
            //cout<<a[i]+1<<" "<<a[i+1]<<endl;
            if(a[i]+1 != a[i+1])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
