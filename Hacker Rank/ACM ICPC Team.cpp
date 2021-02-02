#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m, a[505][505];
    scanf("%d %d",&n, &m);

    char c;
    for(int i=0;i<n;i++)
    {
        getchar();
        for(int j=0;j<m;j++)
        {
            scanf("%c", &c);
            a[i][j] = (c - 48);
        }
    }
    int max = 0, bitCount = 0, possibleTeam = 0, x, y;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            bitCount = 0;
            for(int k=0;k<m;k++)
            {
                x = a[i][k];
                y = a[j][k];
                //cout<<x<<" | "<<y<<" -> "<<(x | y)<<endl;
                if(x | y)
                    bitCount++;
                if(max < bitCount)
                {
                    max = bitCount;
                    possibleTeam = 1;
                }
                else if(bitCount == max)
                {
                    possibleTeam++;
                }
            }
        }
    }

    printf("%d\n%d\n",max,possibleTeam);

    return 0;
}
