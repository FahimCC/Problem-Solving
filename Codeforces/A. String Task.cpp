#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;

int main()
{
    char a[110];

    cin>>a;

    int l = strlen(a);

    for(int i=0;i<l;i++)
    {
        a[i] = tolower(a[i]);
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')
            continue;
        else
        {
            cout<<"."<<a[i];
        }
    }
    cout<<endl;

    return 0;
}
