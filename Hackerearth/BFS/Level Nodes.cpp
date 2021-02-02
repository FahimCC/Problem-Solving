#include<bits/stdc++.h>
using namespace std;

int G[1000][1000],level[1000],visited[1000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,b,m,x,source = 1,counter = 0;

    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        cin>>a>>b;
        G[a][b] = 1;
        G[b][a] = 1;
    }
    cin>>m;

    queue <int> q;
    q.push(source);

    source = 1;
    level[source] = 1;
    visited[source] = 1;

    while(!q.empty())
    {
        x = q.front();
        q.pop();

        for(int i=1;i<=n;i++)
        {
            if(G[x][i] == 1 && visited[i] == 0)
            {
                q.push(i);
                visited[i] = 1;
                level[i] = level[x] + 1;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        //cout<<"Distance from "<<source<<" to "<<i<<": "<<level[i]<<endl;
        if(level[i] == m)
            counter++;
    }
    //cout<<endl;
    cout<<counter<<endl;

    //cout<<level[m]<<endl;

    return 0;
}
