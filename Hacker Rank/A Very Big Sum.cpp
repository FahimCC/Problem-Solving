#include<stdio.h>
int main()
{
	long long a[1000], sum = 0;
	int n, i;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + a[i];
	}

	printf("%lld\n", sum);
	return 0;
}
