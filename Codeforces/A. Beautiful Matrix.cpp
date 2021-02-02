#include<iostream>
using namespace std;

int main()
{
    int a[7][7],x,y,countx = 0 ,county = 0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>a[i][j];
            if(a[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }


    while(1)
    {
        //cout<<x<<" "<<y<<endl;
        if(x == 3 && y==3)
            break;
        if(x > 3)
        {
            countx++;
            x = x - 1;
        }
        else if(x < 3)
        {
            countx++;
            x = x + 1;
        }

        if(y > 3)
        {
            county++;
            y = y - 1;
        }
        else if(y < 3)
        {
            county++;
            y = y + 1;
        }
    }
    cout<<countx+county<<endl;


    return 0;
}
