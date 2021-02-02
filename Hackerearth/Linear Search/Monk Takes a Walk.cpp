#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
    int test,len,count;
    char c[1000010];

    cin>>test;
    getchar();

    while(test--)
    {
        cin.getline(c,1000010);
        len = strlen(c);
        count = 0;
        for(int i=0;i<len;i++)
        {
            if(c[i]=='A'||c[i]=='a'||c[i]=='E'||c[i]=='e'||c[i]=='I'||c[i]=='i'||c[i]=='O'||c[i]=='o'||c[i]=='U'||c[i]=='u')
                count++;
        }
        cout<<count<<endl;
    }

    return 0;
}
