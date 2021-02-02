#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[18];
    //while(1)
    {
        cin.getline(a,18);

        int l,f,f1,limit;
        l = strlen(a);
        f = 0,f1 = 0;

        if(l%2 == 0)
            limit = l/2;
        else
            limit = ((l/2)+1);

        for(int i=0,j=l-1;i<limit;i++,j--)
        {
            //cout<<a[i]<<" "<<a[j]<<endl;
            if(a[i] == a[j])
            {
                f++;
            }
            else
            {
                f1++;
            }
        }

        if((limit == f && l%2!=0) || f1 == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;
}
