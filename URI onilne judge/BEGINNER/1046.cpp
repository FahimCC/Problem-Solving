#include<stdio.h>
int main()
{
    int n,m,x,y,z;
    scanf("%d%d",&n,&m);
    if(n<m)
    {
        x=(n-m)*(-1);
        printf("O JOGO DUROU %d HORA(S)",x);
    }
    else if(n==m)
        printf("O JOGO DUROU 24 HORA(S)");
    else if(n>m)
    {
        y=24-n;
        z=y+m;
        printf("O JOGO DUROU %d HORA(S)",z);
    }
    return 0;
}
