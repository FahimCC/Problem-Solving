#include<stdio.h>
int main()
{
    int n,p,first=0,last=0,even=-1,odd=-1,m=0,k=0;

    scanf("%d%d",&n,&p);

    if(n%2==0)
        even = n;
    else
        odd = n;
    if(1 == p || even==p || (odd-1)==p || odd==p)
    {
        printf("0\n");
        return 0;
    }
    for(int i=1;i<=n;i=i+2)
    {
        m++;
        if((i+1)==p || (i+2)==p)
        {
            first = m;
            break;
        }
    }

    if(n == odd)
    {
        for(int i=n;i>=1;i=i-2)
        {
            if((i-1)==p || i==p)
            {
                last = k;
                break;
            }
            k++;
        }
    }
    else if(n == even)
    {
        for(int i=n;i>=1;i=i-2)
        {
            k++;
            if((i-1)==p || (i-2)==p)
            {
                last = k;
                break;
            }
        }
    }

    //printf("%d %d\n",first,last);
    if(first < last)
        printf("%d\n",first);
    else
        printf("%d\n",last);

    return 0;
}
