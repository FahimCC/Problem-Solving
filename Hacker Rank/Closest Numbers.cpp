#include<bits/stdc++.h>
using namespace std;

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

	int a[n + 1];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a, a + n);

	vector<int > vec;

	int x, Min = 999999999;
	for (int i = 0; i < n - 1; i++)
	{
		x = max(a[i], a[i + 1]) - min(a[i], a[i + 1]);
		//cout << x << endl;
		if (Min > x)
		{
			Min = x;
			vec.clear();
			vec.push_back(a[i + 1]);
			vec.push_back(a[i]);
		}
		else if (Min == x)
		{
			vec.push_back(a[i + 1]);
			vec.push_back(a[i]);
		}
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	return 0;
}