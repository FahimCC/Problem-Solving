#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    float newSalary, earnSalary,n;
    cin>>n;

    if(n>=0 && 400.00>=n)
    {
        newSalary = n + ((n*15)/100.00);
        earnSalary = (n*15)/100.00;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<newSalary<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<earnSalary<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if(n>=400.01 && 800.00>=n)
    {
        newSalary = n + ((n*12)/100.00);
        earnSalary = (n*12)/100.00;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<newSalary<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<earnSalary<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
    else if(n>=800.01 && 1200.00>=n)
    {
        newSalary = n + ((n*10)/100.00);
        earnSalary = (n*10)/100.00;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<newSalary<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<earnSalary<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
    else if(n>=1200.01 && 2000.00>=n)
    {
        newSalary = n + ((n*7)/100.00);
        earnSalary = (n*7)/100.00;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<newSalary<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<earnSalary<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
    else if(n>2000.00)
    {
        newSalary = n + ((n*4)/100.00);
        earnSalary = (n*4)/100.00;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<newSalary<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<earnSalary<<endl;
        cout<<"Em percentual: 4 %"<<endl;
    }

    return 0;
}
