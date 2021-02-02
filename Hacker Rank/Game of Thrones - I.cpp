#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char a[100010];
    int l,flag = 0,c[150]={0},counto = 0,counte = 0;

    cin.getline(a,100010);
    l = strlen(a);

    //memset()
    for(int i=0;i<=l;i++)
    {
        c[a[i]]++;
    }

//    for(int i=97;i<=122;i++)
//    {
//        //if(c[i] != 0)
//            cout<<(char)i<<" "<<c[i]<<endl;
//    }

    if(l%2 == 0)
    {
        for(int i=97;i<=122;i++)
        {
            if(c[i] != 0 && c[i]%2 !=0)
            {
                flag = 1;
                break;
            }
        }
    }
    else
    {
        counto = 0,counte = 0;
        for(int i=97;i<=122;i++)
        {
            if(c[i] != 0)
            {
                if(c[i]%2 !=0)
                {
                    counto++;
                }
                else
                {
                    counte++;
                }
            }
            if(counto == 2)
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
