#include<bits/stdc++.h>
using namespace std;

char a[9999999];
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);


    int l,j = 0,count = 0;
    //unsigned long long sum = 0,ans;
    double sum = 0.0,ans;

    scanf("%s",a);
    l = strlen(a);

    cout<<l<<endl;

    for(int i=l-1;i>=0;i--)
    {
        sum = sum + ((a[i]-'0')*pow(2,j));
        j++;
    }

    printf("%lf\n",sum);
    for(int i=0;i<j;i++)
    {
        ans = (double)pow(4.0,(double)i);
        if(ans >= sum)
            //break;

        //cout<<ans<<endl;
        printf("%lf\n",ans);
        count++;
    }

    printf("%d\n",count);

    return 0;
}
