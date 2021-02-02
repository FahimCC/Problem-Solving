#include<bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a[22202];
    vector<int> vec;
    vector<int>::iterator it;

    for(int i=1;i<=22200;i++)
        vec.push_back((i*(3*i+1))/2);

    int t;
    cin>>t;

    while(t--)
    {

        int n;
        cin>>n;

        int count = 0;

        while(n >= 2)
        {

            it = upper_bound(vec.begin(),vec.end(),n);
            int dis = distance(vec.begin(),it);
            dis = dis - 1;

            count++;
            n = n - vec[dis];
            //cout<<vec[dis]<<" ";
        }
        //cout<<endl;
        cout<<count<<endl;

        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(stop - start);
        cout << duration.count() << endl;
    }

    return 0;
}
