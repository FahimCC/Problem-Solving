#include<stdio.h>

int main()
{
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/

	long long t, m, p;
	scanf("%lld", &t);

	m = 3;
	p = 3;

	while (p < t)
	{
		m = 2 * m;
		p = p + m;
	}

	t = p - t + 1;

	printf("%lld\n", t);

	return 0;
}