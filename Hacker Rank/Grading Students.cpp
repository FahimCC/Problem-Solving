#include<stdio.h>

int main()
{
    int n,i,a[1000];

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<=n;i++)
    {
        if((100 - a[i])==1 || (100 - a[i])==2)
            printf("100\n");
        else if((95 - a[i])==1 || (95 - a[i])==2)
            printf("95\n");
        else if((90 - a[i])==1 || (90 - a[i])==2)
            printf("90\n");
        else if((85 - a[i])==1 || (85 - a[i])==2)
            printf("85\n");
        else if((80 - a[i])==1 || (80 - a[i])==2)
            printf("80\n");
        else if((75 - a[i])==1 || (75 - a[i])==2)
            printf("75\n");
        else if((70 - a[i])==1 || (70 - a[i])==2)
            printf("70\n");
        else if((65 - a[i])==1 || (65 - a[i])==2)
            printf("65\n");
        else if((60 - a[i])==1 || (60 - a[i])==2)
            printf("60\n");
        else if((55 - a[i])==1 || (55 - a[i])==2)
            printf("55\n");
        else if((50 - a[i])==1 || (50 - a[i])==2)
            printf("50\n");
        else if((45 - a[i])==1 || (45 - a[i])==2)
            printf("45\n");
        else if((40 - a[i])==1 || (40 - a[i])==2)
            printf("40\n");
        else
            printf("%d\n",a[i]);

    }
    return 0;
}
