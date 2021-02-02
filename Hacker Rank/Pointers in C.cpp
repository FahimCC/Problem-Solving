#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void update(int *a, int *b)
{
    int *c;
    *c = *a;
    *a = (*a)+(*b);
    *b = (*c)-(*b);
}

int main()
{
    int a,b;

    scanf("%d %d",&a,&b);
    int *pa = &a, *pb = &b;
    update(pa, pb);
    if (b<0)
        b = (-1) *b;
    printf("%d\n%d",a,b);

    return 0;
}
