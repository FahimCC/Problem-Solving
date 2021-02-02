#include<bits/stdc++.h>
using namespace std;

int main()
{
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/

	int test, n;
	scanf("%d", &test);

	while (test--)
	{
		char s[1000];
		int flag = 0, min = 1000, a[99] = {0};
		scanf("%d", &n);
		getchar();

		scanf("%s", s);
		for (int i = 0; i < n; i++)
		{
			a[s[i]]++;
			if (flag == 0 && (s[i] >= 'A' && s[i] <= 'Z') && (s[i - 1] != s[i] && s[i] != s[i + 1]))
				flag = 1;
			//cout << flag << endl;
		}

		for (int i = 65; i <= 90; i++)
		{
			//printf("%d ", a[i]);
			if (a[i] != 0 && a[i] < min)
				min = a[i];
		}

		//printf("%d %d %d\n", a[95], flag,  min);

		if (min >= 2 && (a[95] >= 1 || flag == 0))
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}