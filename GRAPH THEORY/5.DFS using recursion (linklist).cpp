#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL)
using namespace std;

class Graph
{
    int V;
    list <int> *adj;
    vector <bool> visited;
public:
    Graph(int m)
    {
        V=m;
        adj=new list<int> [V];
        visited.resize(V);
        for(int i=0;i<V;i++)
        {
            visited[i]=false;
        }
    }
    void addedge(int v,int w)
    {
        adj[v].push_back(w);
    }
    void DFS(int s);


};
void Graph::DFS(int s)
{
    //vector <bool> visited(V,false);
    //stack <int> s1;

    visited[s]=true;
    cout<<s<<' ';

    list<int> ::iterator it;

        for(it=adj[s].begin();it!=adj[s].end();it++)
        {
            if(!visited[*it])
            {
                //visited[*it]=true;
                DFS(*it);
            }
        }

}
int main()
{
    int V;
    cout<<"\nNumber of vertex->";
    cin>>V;
    Graph g(V);
    int E,v,w;
    cout<<"\nNumber of edge->";
    cin>>E;
    for(int i=0;i<E;i++)
    {
        cin>>v>>w;
        g.addedge(v,w);
    }

    int s;
    cout<<"\nStart vertex->";
    cin>>s;

    g.DFS(s);

    return 0;
}
