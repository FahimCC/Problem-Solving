#include<iostream>
using namespace std;

int main()
{
    string a;

    cin>>a;

    if(a == "vertebrado")
    {
        cin>>a;
        if(a == "ave")
        {
            cin>>a;
            if(a == "carnivoro")
                cout<<"aguia"<<endl;
            else if(a == "onivoro")
                cout<<"pomba"<<endl;
        }
        else if(a == "mamifero")
        {
            cin>>a;
            if(a == "onivoro")
                cout<<"homem"<<endl;
            else if(a == "herbivoro")
                cout<<"vaca"<<endl;
        }
    }
    else if(a == "invertebrado")
    {
                cin>>a;
        if(a == "inseto")
        {
            cin>>a;
            if(a == "hematofago")
                cout<<"pulga"<<endl;
            else if(a == "herbivoro")
                cout<<"lagarta"<<endl;
        }
        else if(a == "anelideo")
        {
            cin>>a;
            if(a == "hematofago")
                cout<<"sanguessuga"<<endl;
            else if(a == "onivoro")
                cout<<"minhoca"<<endl;
        }
    }

    return 0;
}
