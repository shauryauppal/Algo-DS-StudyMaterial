#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL)
typedef pair<int,int> iPair;
class Graph
{
    int V;
    list < pair<int,int> > *adj;
public:
    Graph(int x)
    {
        V=x;
        adj=new list < pair <int,int> > [V+1];
    }
    void addedge(int u,int v,int w)
    {
        adj[u].push_back(make_pair(v,w));
    }
    void shortestPath(int);
};

void Graph::shortestPath(int s)
{
    priority_queue < iPair,vector<iPair>,greater <iPair> > pq;
    vector <long long> dist(V+1,LONG_LONG_MAX);
    dist[s]=0;
    pq.push(make_pair(0,s));

    list<iPair> ::iterator it;
    while(!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();

        for(it=adj[u].begin();it!=adj[u].end();it++)
        {
            int v=(*it).first;
            int weight=(*it).second;

            if(dist[v] > dist[u]+weight)
            {
                //update and push in heap
                dist[v]=dist[u]+weight;
                pq.push(make_pair(dist[v],v));
            }
        }
    }
    for(int i=1;i<=V;i++)
        cout<<dist[i]<<' ';
    cout<<'\n';
}
int main()
{
  //fastIO;
    int V,E;
    cout<<"\nNumber of vertex and edges->";
    cin>>V>>E;
    Graph g(V);
    int u,v,w;
    for(int i=1;i<=E;i++)
    {
        cin>>u>>v>>w;
        g.addedge(u,v,w);
        g.addedge(v,u,w);
    }
    int S;
    cout<<"\nEnter source node->";
    cin>>S;
    g.shortestPath(S);
    return 0;
}
