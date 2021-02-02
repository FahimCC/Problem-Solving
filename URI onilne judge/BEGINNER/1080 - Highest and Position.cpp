#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int n, p, max = 0;

    for(int i=1;i<=100;i++)
    {
        cin>>n;

        if(max < n)
        {
            max = n;
            p = i;
        }
    }

    cout<<max<<endl<<p<<endl;

    return 0;
}
