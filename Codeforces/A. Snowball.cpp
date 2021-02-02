#include<iostream>
using namespace std;

int main()
{
    int w,h,w1,h1,w2,h2,weightOfShnowball = 0;

    cin>>w>>h>>w1>>h1>>w2>>h2;

    if(h == h1 || h == h2)
        weightOfShnowball = -h;

    weightOfShnowball = weightOfShnowball+w+h-w1+h1-w2+h2;

    if(weightOfShnowball <= 0)
        cout<<0<<endl;
    else
        cout<<weightOfShnowball<<endl;

    return 0;
}
