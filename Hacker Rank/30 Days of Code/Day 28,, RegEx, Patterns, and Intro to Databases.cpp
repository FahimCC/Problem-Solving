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

	int test;
	cin >> test;

	multiset<string> s;

	while (test--)
	{
		string a, b, c = "@gmail.com";
		cin >> a >> b;

		if (b.find(c) != string::npos)
			s.insert(a);
	}

	for (auto a : s)
		cout << a << endl;

	return 0;
}