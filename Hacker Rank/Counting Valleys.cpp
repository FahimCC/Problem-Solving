#include<bits/stdc++.h>
using namespace std;

int a[100004];
char s[100004];

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n, count = 0, sum = 0;
	scanf("%d", &n);
	getchar();

	for (int i = 1; i <= n; i++)
	{
		scanf("%c", &s[i]);

		if (s[i] == 'U')
			sum++;
		else if (s[i] == 'D')
			sum--;

		// cout << sum << " " << s[i] << endl;

		if (sum == 0 && s[i] == 'U')
			count++;
	}

	printf("%d\n", count);

	return 0;

}
