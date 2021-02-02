#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[104];

    int n = 0,t = 0,i = 0,e = 0,l,min;

    cin.getline(a,104);

    l = strlen(a);

    for(int j=0;j<l;j++)
    {
        if(a[j] == 'n')
            n++;
        else if(a[j] == 'i')
            i++;
        else if(a[j] == 't')
            t++;
        else if(a[j] == 'e')
            e++;

    }

    n = n / 3;
    e = e / 3;

    min = n;

    if(min > e)
        min = e;
    if(min > i)
        min = i;
    if(min > t)
        min = t;

    cout<<min<<endl;



    return 0;
}
