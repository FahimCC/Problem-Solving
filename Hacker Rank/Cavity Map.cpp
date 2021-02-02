#include<stdio.h>

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, a[103][103];
	scanf("%d", &n);

	char s[105];
	for (int i = 0; i < n; i++)
	{
		scanf("%s", s);
		for (int j = 0; j < n; j++)
		{
			a[i][j] = s[j] - '0';
		}
	}
	for (int i = 1; i < n - 1; i++)
	{
		for (int j = 1; j < n - 1; j++)
		{
			if ((a[i - 1][j] < a[i][j]) && (a[i][j + 1] < a[i][j]) && (a[i + 1][j] < a[i][j]) && (a[i][j - 1] < a[i][j]))
			{
				a[i][j] = 99;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] != 99)
				printf("%d", a[i][j]);
			else
				printf("X");
		}
		printf("\n");
	}
	return 0;
}