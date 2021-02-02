#include<bits/stdc++.h>
using namespace std;

int main()
{


    int y,r;

    cin>>y;



    while(1)
    {
        y++;
        r = y;

        set<int >s;
        while(r!=0)
        {
            s.insert(r%10);
            r = r / 10;
        }
        if(s.size() == 4)
        {
            break;
        }
    }
    cout<<y<<endl;

    return 0;
}
