#include<iostream>
using namespace std;

int main()
{
    int i, j, k, n, d, a[100000], count = 0;

    cin >> n >> d;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
            {
                if ((a[j] - a[i]) == d && (a[k] - a[j]) == d && (i < j) && (j < k))
                {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
