#include<iostream>
using namespace std;

int main()
{
    int a,b,c,r,n,x,i,count = 0;
    double d;

    cin>>a>>b>>c;

    for(int j=a;j<=b;j++)
    {
        n = j;
        r = 0;
        while(n!=0)
        {
            r = n%10 + r*10;
            n = n/10;
        }
        x = (j - r);
        x = (x>=0)?x:((-1)*x);

        d = (double) x/c ;
        i = (int)x/c;

        if(d == i)
        {
            count++;
        }
    }

    cout<<count<<endl;
    return 0;
}
