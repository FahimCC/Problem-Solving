#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    double n,sum = 0.0;
    int count = 0;

    while(cin>>n)
    {
        if(n >= 0.0 && n <= 10.0)
        {
            count++;
            sum = sum + n;
            if(count == 2)
            {
                printf("media = %.2lf\n",sum/2.0);
                break;
            }
        }
        else
            cout<<"nota invalida"<<endl;
    }

    return 0;
}
