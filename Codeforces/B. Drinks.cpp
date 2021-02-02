#include<stdio.h>

int main()
{
    double a[110],sum = 0.0;
    int n;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%lf",&a[i]);
        sum = sum + a[i];
    }

    printf("%.12lf\n",sum/n);
    return 0;
}
