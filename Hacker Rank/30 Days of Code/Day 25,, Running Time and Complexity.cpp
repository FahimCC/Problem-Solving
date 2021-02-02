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

	while (test--)
	{
		int n, flag = 0;
		cin >> n;

		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1 || n == 1)
			cout << "Not prime" << endl;
		else
			cout << "Prime" << endl;
	}

	return 0;
}