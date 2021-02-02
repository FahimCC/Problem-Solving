#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	//Write your code here.

	int test, n, k, x, max;
	cin >> test;

	while (test--)
	{
		cin >> n >> k;

		max = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				x = (i & j);
				if (x < k && x > max)
					max = x;
			}
		}
		cout << max << endl;
	}


	return 0;
}