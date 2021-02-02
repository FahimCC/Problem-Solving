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

	int n, a[604];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int count = 0;
	for (int i = 0; i < n ; i++)
	{
		bool swapped = true;
		for (int j = 0; j < n - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				count++;
				swapped = false;
			}
		}
		if (swapped) {
			break;
		}
	}
	cout << "Array is sorted in " << count << " swaps." << endl;
	cout << "First Element: " << a[0] << endl;
	cout << "Last Element: " << a[n - 1] << endl;

	return 0;
}