#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[1000];
    int l,count4=0,count7=0;

    cin>>s;
    l = strlen(s);

    for(int i=0;i<l;i++)
    {
        if(s[i] == '4')
            count4++;
        else if(s[i] == '7')
            count7++;
    }

    if(count4 == 0 && count7 == 0)
        cout<<"-1"<<endl;
    else if(count4 < count7)
        cout<<"7"<<endl;
    else if(count4 > count7)
        cout<<"4"<<endl;
    else
        cout<<"4"<<endl;



    return 0;
}
