#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int n;
    fin>>n;
    getchar();
    char a[n+1];

    for(int i=0;i<n;i++)
        fin>>a[i];

    n = n/2;

    for(int i=0,j=n;i<n;i++,j++)
    {
        if(a[i] == 'L')
            fout<<i+1<<" "<<j+1<<endl;
        else
            fout<<j+1<<" "<<i+1<<endl;
    }


    return 0;
}
