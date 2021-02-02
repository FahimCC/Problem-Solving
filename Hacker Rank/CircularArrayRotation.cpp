#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

#endif

	int n, k, q, x, a[200009];

	scanf("%d %d %d", &n, &k, &q);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	while (q--)
	{
		scanf("%d", &x);

		if (k > x)
		{
			x = x - k;
			x = n + x;
			while (x < 0)
				x = n + x;
		}
		else
		{
			x = x - k;
		}

		printf("%d\n", a[x]);
	}

	return 0;
}
