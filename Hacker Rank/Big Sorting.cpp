#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool compare(string a, string b)
{
	if (a.length() != b.length())
		return (a.length() < b.length());
	else
		return a < b;
}

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

	vector<string>vec(n);

	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end(), compare);

	for (auto x : vec)
	{
		cout << x << endl;
	}

	return 0;
}