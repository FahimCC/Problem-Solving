#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ///Vector Initialization

    vector<int>vec;
    vector<int>:: iterator it;

    vector <int> vec1(4);
    vector <int> vec2(vec1.begin(),vec1.end());

    cout<<vec1.size()<<endl;

    int n,i,in;
    n = 3;

    ///Insertion Element : push_back();

    for(int i=0;i<n;i++)
    {
        cin>>in;
        vec.push_back(in);
    }

    vector<int>vect(vec);

    ///Iteration by Iterator
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<endl;
    }

    ///Iterator by Index
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<endl;
    }

    ///Iteration by Index and size();
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }

    ///Deleting last element : pop_back()
    vec.pop_back();

    ///erase(iterator position);
    ///erase(iterator first, iterator last);
    ///empty(); (checks whether the vector is empty or not);
    ///clear(); (clearing the voice whole vector)
    ///resize(size);
    ///resize(size, value); size > n
    ///resize(size); size > n

    return 0;
}
