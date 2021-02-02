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

	int n, m, a[200005], b[200005];

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);

	cin >> m;
	for (int i = 0; i < m; i++)
		cin >> b[i];
	sort(b, b + m);

	set<int > s;
	set<int > ::iterator it;

	for (int i = 0, j = 0; j < m;)
	{
		if (a[i] != b[j])
		{
			s.insert(b[j]);
			j++;
		}
		else
		{
			i++;
			j++;
		}
	}

	for (it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}