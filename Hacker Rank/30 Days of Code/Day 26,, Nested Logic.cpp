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

	int d2, m2, y2, d1, m1, y1, fine = 0;

	cin >> d2 >> m2 >> y2;
	cin >> d1 >> m1 >> y1;

	if (d1 < d2 && m1 == m2 && y1 == y2)
	{
		fine = (d2 - d1) * 15;
	}
	else if (m1 < m2 && y1 == y2)
	{
		fine = (m2 - m1) * 500;
	}
	else if (y1 < y2)
	{
		fine = 10000;
	}

	cout << fine << endl;

	return 0;
}