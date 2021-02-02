#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,e,u,v,m,source,t,x;

    cin>>n>>e;

    vector <int> vec[n+1];
    while(e--)
    {
        cin>>u>>v;
        u--;
        v--;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    cin>>m;
    while(m--)
    {
        int  count = 0;
        int visited[n+1] = {0};
        int distance[n+1] = {0};

        cin>>source>>t;
        source--;
        queue <int> q;

        distance[source] = 0;
        visited[source] = 1;
        q.push(source);

        while(!q.empty())
        {
            x = q.front();
            q.pop();
            for(int i=0;i<vec[x].size();i++)
            {
                if(visited[vec[x][i]] == 0)
                {
                    distance[vec[x][i]] = distance[x] + 1;
                    visited[vec[x][i]] = 1;
                    q.push(vec[x][i]);
                }
            }
        }

        for(int i=0;i<vec[source].size();i++)
        {
            cout<<distance[i]<<" ";
            //if(distance[i] == t)
              //  count++;
        }
        cout<<count<<endl;
    }

    return 0;
}
