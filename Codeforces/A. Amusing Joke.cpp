#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char a[105],b[105],c[105];
    int l1,l2,flag = 0;

    cin.getline(a,105);
    cin.getline(b,105);
    cin.getline(c,105);

    strcat(b,a);
    l1 = strlen(b);
    l2 = strlen(c);


    multiset<char>m1(b,b+l1);
    multiset<char>m2(c,c+l2);
    multiset<char>::iterator it1,it2;

    if(m1.size() == m2.size())
    {
        for(it1=m1.begin(),it2=m2.begin();it1!=m1.end();it1++,it2++)
        {
            //cout<<*it1<<" "<<*it2<<endl;
            if(*it1 != *it2)
            {
                flag = 1;
                break;
            }
        }
    }
    else
    {
        flag = 1;
    }

    if(flag == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
