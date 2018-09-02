#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list <int> *adj;
public:
    Graph (int m)
    {
        V=m;
        adj=new list<int>[V];
    }
    void addedge(int v,int w)
    {
        adj[v].push_back(w);
    }
    void DFS(int s);

};
void Graph::DFS(int s)
{
    bool visited[V];
    for(int i=0;i<V;i++)
            visited[i]=false;

    stack <int> s1;

    visited[s]=true;
    s1.push(s);

    list<int> ::iterator it;

    while(!s1.empty())
    {
        s=s1.top();
        cout<<s<<' ';
        s1.pop();

    for(it=adj[s].begin();it!=adj[s].end();it++)
    {
        if(!visited[*it])
        {
            visited[*it]=true;
            s1.push(*it);
        }
    }
    }
}

int main()
{
    int V;
    cout<<"\nEnter number of vertex->";
    cin>>V;
    Graph g(V);//V tell number of vertex

    int E,v,w;
    cout<<"\nEnter number of edges->";
        cin>>E;

    for(int i=0;i<E;i++)
    {
        cin>>v>>w;
        g.addedge(v,w);
    }
   int s;
   cout<<"\nEnter start vertex forDFS->";
   cin>>s;
   g.DFS(s);

   return 0;
}
