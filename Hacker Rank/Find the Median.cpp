#include<bits/stdc++.h>
using namespace std;

int a[1000006];

int main()
{
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	//Write your code here.

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a, a + n);

	n = floor(n / 2.0);

	cout << a[n] << endl;

	return 0;
}