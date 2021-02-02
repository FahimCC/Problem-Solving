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

	int a[6][6];
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cin >> a[i][j];
		}
	}

	int sum = 0, max = -63;
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			sum = a[i][j] + a[i - 1][j] + a[i - 1][j - 1] + a[i - 1][j + 1] + a[i + 1][j] + a[i + 1][j - 1] + a[i + 1][j + 1];

			//cout << sum << endl;
			if (max < sum)
				max = sum;
		}
	}

	cout << max << endl;

	return 0;
}