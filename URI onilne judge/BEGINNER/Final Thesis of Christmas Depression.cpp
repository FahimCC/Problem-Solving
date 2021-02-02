#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;

    while(cin>>a>>b)
    {
        if(a > b)
            cout<<"Eu odeio a professora!"<<endl;
        else if(b-a >= 3)
            cout<<"Muito bem! Apresenta antes do Natal!"<<endl;
        else
        {
            cout<<"Parece o trabalho do meu filho!"<<endl;
            if(24-b >= 2)
                cout<<"TCC Apresentado!"<<endl;
            else
                cout<<"Fail! Entao eh nataaaaal!"<<endl;
        }
    }


    return 0;
}
