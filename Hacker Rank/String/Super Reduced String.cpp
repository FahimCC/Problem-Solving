#include<bits/stdc++.h>
using namespace std;

int counter[110];
int main()
{
    char a[105];

    cin>>a;

    int l,flag = 0;
    l = strlen(a);

    for(int i=0;i<l;i++)
    {
        counter[a[i]]++;
    }
    for(int i=97;i<=122;i++)
    {
        if(counter[i] != 0 && counter[i]%2 != 0)
        {
            counter[i] = counter[i]%2;
            printf("%c",i);
            flag = 1;
        }
    }
    if(flag == 0)
        cout<<"Empty String";
    cout<<endl;

    return 0;
}
