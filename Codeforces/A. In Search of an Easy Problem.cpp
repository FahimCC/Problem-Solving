#include<stdio.h>

int main()
{
    int i,n,x,flag = 1;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x == 1)
        {
            flag = 2;
            break;
        }
    }

    if(flag == 1)
        printf("EASY\n");
    else
        printf("HARD\n");

    return 0;
}
