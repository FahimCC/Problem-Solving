
#include<stdio.h>

int main()
{
    int r,c,i,j,flag =1;
    char a[110][110];

    scanf("%d%d",&r,&c);
    getchar();

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            scanf("%c",&a[i][j]);
            getchar();
            if(a[i][j]=='C' || a[i][j]=='M' || a[i][j]=='Y')
            {
                flag =2;
            }
        }
    }
    if(flag == 1)
        printf("#Black&White\n");
    else
        printf("#Color\n");

    return 0;
}
