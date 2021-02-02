#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string, int> m;

    m["Tetrahedron"] = 4;
    m["Cube"] = 6;
    m["Octahedron"] = 8;
    m["Dodecahedron"] = 12;
    m["Icosahedron"] = 20;

    string x;
    int test, sum = 0;

    cin>>test;
    while(test--)
    {
        cin>>x;
        sum = sum + m[x];
    }
    cout<<sum<<endl;

    return 0;
}
