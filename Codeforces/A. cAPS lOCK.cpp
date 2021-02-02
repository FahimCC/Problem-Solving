#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[105];

    cin.getline(a,105);

    int l,countupper = 0,countlower = 0,count = 0;
    l = strlen(a);

    if((a[0]>=97 && a[0]<=122))
    {
        for(int i=1;i<l;i++)
        {
            if((a[i]>=65 && a[i]<=90))
                count++;
        }
    }
    else if((a[0]>=65 && a[0]<=90))
    {
        for(int i=0;i<l;i++)
        {
            if((a[i]>=65 && a[i]<=90))
                countupper++;
        }
    }
    else if((a[0]>=97 && a[0]<=122))
    {
        for(int i=0;i<l;i++)
        {
            if((a[i]>=97 && a[i]<=122))
                countlower++;
        }
    }

    if((a[0]>=97 && a[0]<=122) && a[1] == '\0')
        a[0] = toupper(a[0]);
    else if((a[0]>=65 && a[0]<=90) && a[1] == '\0')
        a[0] = tolower(a[0]);
    else if(l == countupper)
    {
        for(int i=0;i<l;i++)
        {
            a[i] = tolower(a[i]);
        }
    }
    else if(l-1 == count)
    {
        a[0] = toupper(a[0]);
        for(int i=1;i<l;i++)
        {
            a[i] = tolower(a[i]);
        }

    }

    cout<<a<<endl;
    return 0;
}
