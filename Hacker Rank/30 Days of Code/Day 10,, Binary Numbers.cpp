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

	int n, count = 0, max = 0;
	cin >> n;

	while (n)
	{
		if (n & 1)
			count++;
		else
		{
			//cout << count << endl;
			count = 0;
		}
		if (max < count)
			max = count;

		n = n >> 1;
	}

	cout << max << endl;

	return 0;
}