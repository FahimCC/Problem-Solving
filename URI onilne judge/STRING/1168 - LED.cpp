#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char a[100000];

    int test,count,l;

    cin>>test;

    while(test--)
    {
        cin>>a;
        l = strlen(a);
        count = 0;
        for(int i=0;i<l;i++)
        {
            if(a[i] == '0')
                count = count + 6;
            else if(a[i] == '1')
                count = count + 2;
            else if(a[i] == '2')
                count = count + 5;
            else if(a[i] == '3')
                count = count + 5;
            else if(a[i] == '4')
                count = count + 4;
            else if(a[i] == '5')
                count = count + 5;
            else if(a[i] == '6')
                count = count + 6;
            else if(a[i] == '7')
                count = count + 3;
            else if(a[i] == '8')
                count = count + 7;
            else if(a[i] == '9')
                count = count + 6;
        }

        cout<<count<<" leds"<<endl;
    }


    return 0;
}
