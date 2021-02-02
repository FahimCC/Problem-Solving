#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    double A,B,C;

    cin>>test;
    while(test--)
    {
        cin>>A>>B>>C;

        cout<<hex<<left<<showbase<<nouppercase<<(long long)A<<endl;

        cout<<dec<<right<<setw(15)<<setfill('_')<<showpos<<fixed<<setprecision(2)<<B<<endl;

        cout<<scientific<<uppercase<<noshowpos<<setprecision(9)<<C<<endl;
    }

    return 0;
}
