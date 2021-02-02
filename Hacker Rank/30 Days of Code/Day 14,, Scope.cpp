#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
private:
    vector<int> elements;

public:
    int maximumDifference;

    // Add your code here
    Difference(vector<int> a)
    {
        this->elements = a;
    }
    void computeDifference()
    {
        maximumDifference = 0;
        for (int i = 0; i < elements.size(); i++)
        {
            for (int j = i + 1; j < elements.size(); j++)
            {
                int x = abs(elements[i] - elements[j]);
                if (x > maximumDifference)
                    maximumDifference = x;
            }
        }
    }

}; // End of Difference class

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}