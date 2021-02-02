#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i,arr[1000];
    scanf("%d", &num);
    for(i = 0; i < num; i++) {
        scanf("%d",&arr[i]);
    }

    for(i = num-1; i >= 0; i--)
        printf("%d ",arr[i]);
    return 0;
}
