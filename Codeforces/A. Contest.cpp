#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c,d,vasya,misha;

    cin>>a>>b>>c>>d;

    vasya = max(((3*b)/10),(b-(b/250)*d));
    misha = max(((3*a)/10),(a-(a/250)*c));

    //cout<<vasya<<" "<<misha<<endl;

    if(vasya < misha)
        cout<<"Misha"<<endl;
    else if(vasya > misha)
        cout<<"Vasya"<<endl;
    else
        cout<<"Tie"<<endl;

    return 0;
}
