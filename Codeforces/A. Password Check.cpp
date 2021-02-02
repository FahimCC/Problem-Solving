#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char a[105];

    cin.getline(a,105);
    int l,small=0,capital=0,digit=0,flag = 0;
    l = strlen(a);

    if(l>=5)
    for(int i=0;i<l;i++)
    {
        if(a[i]>=65 && a[i]<=90)
            capital = 1;
        else if(a[i]>=97 && a[i]<=122)
            small = 1;
        else if(a[i]>=49 && a[i]<=57)
            digit = 1;
        if(capital == 1 && small == 1 && digit == 1)
        {
            flag = 1;
            //cout<<capital<<" "<<small<<" "<<digit<<endl;
            break;
        }
    }

    if(flag == 1)
        cout<<"Correct"<<endl;
    else
        cout<<"Too weak"<<endl;

    return 0;
}
