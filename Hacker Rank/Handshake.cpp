#include<stdio.h>
int main()
{
    int sum,n,test;

    scanf("%d",&test);

    while(test--)
    {
        scanf("%d",&n);

        printf("%d\n",(n*(n-1))/2);
    }


    return 0;
}
