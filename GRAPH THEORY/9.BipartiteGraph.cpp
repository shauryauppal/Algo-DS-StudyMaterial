/*A bipartite graph is possible if the graph coloring is possible using two colors such that vertices in a set are colored with the same color. Note that it is possible to color a cycle graph with even cycle using two colors. For example, see the following graph.*/
#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL)
vector <int> visited;
class Graph
{
    int V;
    list <int> *adj;
public:
    Graph(int x)
    {
        V=x;
        adj = new list<int> [V+1];
        visited.resize(V+1,-1);
    }
    void addedge(int u,int v)
    {
        adj[u].push_back(v);
    }
    bool bfs();
    bool bfsUtil(int x);

};

bool Graph :: bfsUtil(int v)
{
    queue <int> q;
    visited[v]=1;
    q.push(v);

    list<int> ::iterator it;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(it=adj[x].begin();it!=adj[x].end();it++)
        {
            if(visited[*it]==-1)
            {
                visited[*it]=1-visited[x];
                q.push(*it);
            }
            else if(visited[*it]==visited[x])
            return true;//not 2 colorable
        }
    }
    return false;//2 colorable
}
bool Graph :: bfs()
{
    for(int i=1;i<=V;i++)
    {
        if(visited[i]==-1)
        {
            if(bfsUtil(i))
                return true;
        }
    }
    return false;
}


int main()
{
    fastIO;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
    int V,E;
    cin>>V>>E;
    Graph g(V);
    int u,v;
    for(int i=0;i<E;i++)
    {
        cin>>u>>v;
        g.addedge(u,v);
        g.addedge(v,u);
    }
    bool x=g.bfs();
    cout<<"Scenario #"<<i<<":\n";
    if(x==0)
        cout<<"No suspicious bugs found!\n";
    else cout<<"Suspicious bugs found!\n";
     visited.clear();
    }
    return 0;
}
