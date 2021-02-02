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

	string s;
	cin >> s;

	try
	{
		cout << stoi(s) << endl;
	}
	catch (...)
	{
		cout << "Bad String" << endl;
	}



	return 0;
}