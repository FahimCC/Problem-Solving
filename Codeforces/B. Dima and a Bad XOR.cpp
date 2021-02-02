#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,flag,max = 0,b[505];
    int a[505][505];

    //cout<<(10^0)<<endl;

    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    vector<int >vec1;
    max = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
        }
        vec1.push_back(max);
    }

    //cout<<vec1[0]<<" "<<vec1[1]<<endl;
    int  xo = (vec1[0]^vec1[1]),r;
    //cout<<xo<<endl;
    for(int i=2;i<n;i++)
    {
        xo = vec1[i]^xo;
        //cout<<xo<<endl;
    }

    if(xo == 0)
    {
        cout<<"NIE"<<endl;
    }
    else
    {
        vector<int >vec;
        vector<int >::reverse_iterator rit;

        cout<<"TAK"<<endl;
        while(xo != 0)
        {
            r = xo%10;
            vec.push_back(r);
            xo = xo/10;
        }

        for(rit=vec.rbegin();rit!=vec.rend();rit++)
        {
            cout<<*rit<<" ";
        }
        cout<<endl;
    }

    return 0;
}
