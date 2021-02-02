#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m,a,b,x,test,source;

    cin>>test;
    while(test--)
    {
        cin>>n>>m;

        vector <int> vec[n+1];
        int visited[n+1] = {0};
        int distance[n+1] = {0};

        while(m--)
        {
            cin>>a>>b;
            a--;
            b--;
            vec[a].push_back(b);
            vec[b].push_back(a);
        }

        queue <int> q;
        source = 0;

        q.push(source);
        visited[source] = 1;
        distance[source] = 0;

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
        cout<<distance[n-1]<<endl;
    }

    return 0;
}
