#include<iostream>
using namespace std;

int main()
{
    int n,i,result;

    cin>>n;

    for(i=1;i<=10;i++)
    {
        result = n * i;
        cout<<n<<" x "<<i<<" = "<<result<<endl;
    }

    return 0;
}

