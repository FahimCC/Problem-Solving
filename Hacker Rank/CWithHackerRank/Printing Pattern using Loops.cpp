#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,x=1,a[1005][1005];
    scanf("%d", &n);

    a[x][x] = 1;
    for(int i=1;i<=n;i++)
    {
        x++;
        for(int j=1;j<=n;j++)
        {
            a[i][j] = x;
            a[i-1][j] = x;
            a[i][j-1] = x;
            a[i-1][j-1] = x;

        }
    }

    return 0;
}
