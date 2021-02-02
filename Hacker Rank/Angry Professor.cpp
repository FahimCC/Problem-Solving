#include<iostream>
using namespace std;

int main()
{
    int test, n, k, i, count, a[100000];
    cin >> test;

    while (test--)
    {
        count = 0;
        cin >> n >> k;

        for (i = 1; i <= n; i++)
        {
            cin >> a[i];

            if (a[i] <= 0)
                count++;
        }

        if (count >= k)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}
