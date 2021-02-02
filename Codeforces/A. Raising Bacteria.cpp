#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, count1 = 0;
	cin >> n;

	//bitset<100> b(n);

	//cout << b.count() << endl;
	while (n)
	{
		if (n & 1)
			count1++;

		n >>= 1;
	}

	cout << count1 << endl;

	return 0;
}
