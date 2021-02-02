#include<bits/stdc++.h>
using namespace std;

int a[100005];

int main()
{
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/

	int test, n, flag, sumj, sumi;

	scanf("%d", &test);

	while (test--)
	{
		scanf("%d", &n);

		sumi = 0;
		sumj = 0;
		flag = 0;
		for (int i = 1; i <= n; i++)
		{
			scanf("%d", &a[i]);
			sumi = sumi + a[i];
		}

		for (int i = 1; i <= n; i++)
		{
			if ((sumj * 2) == (sumi - a[i]))
			{
				flag = 1;
				break;
			}
			sumj = sumj + a[i];
		}

		if (flag == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}


