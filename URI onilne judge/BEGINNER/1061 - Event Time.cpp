#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    char ch[5];
    int w1,x1,y1,z1,w2,x2,y2,z2,w3,x3,y3,z3,x4=0,y4=0,w4=0;
    cin>>ch;
    cin>>w1;
    cin>>x1;
    cin.ignore();
    cin>>ch>>y1;
    cin.ignore();
    cin>>ch>>z1;

    cin>>ch;
    cin>>w2;
    cin>>x2;
    cin.ignore();
    cin>>ch>>y2;
    cin.ignore();
    cin>>ch>>z2;

    if(z1 <= z2)
        z3 = z2-z1;
    else
    {
        z3 = (z2+60) - z1;
        y4 = 1;
    }


    if(y1 <= y2)
        y3 = y2-y1;
    else
    {
        y3 = (y2+60) - y1;
        x4 = 1;
    }

    if(x1 <= x2)
        x3 = x2-x1;
    else
    {
        x3 = (x2+24) - x1;
        w4 = 1;
    }

    w3 = abs(w1-w2);

    cout<<w3-w4<<" dia(s)\n"<<x3-x4<<" hora(s)\n"<<y3-y4<<" minuto(s)\n"<<z3<<" segundo(s)\n";

    return 0;
}
