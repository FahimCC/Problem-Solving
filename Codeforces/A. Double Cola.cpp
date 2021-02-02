#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;

    queue< string> q;
    q.push("Sheldon");
    q.push("Leonard");
    q.push("Penny");
    q.push("Rajesh");
    q.push("Howard");


    vector <string> vec;
    vec.push_back("Fahim");
    vec.push_back("Sheldon");
    vec.push_back("Leonard");
    vec.push_back("Penny");
    vec.push_back("Rajesh");
    vec.push_back("Howard");

    int n,x = 1;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        s = q.front();
        q.pop();
        //18cout<<s<<endl;
        if(s == "Sheldon")
            x++;


        for(int j=1;j<=2;j++)
        {
            q.push(s);
            vec.push_back(s);
            //cout<<1<<endl;
        }
    }

    cout<<vec.back()<<endl;
    return 0;
}

