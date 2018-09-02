#include <bits/stdc++.h>
using namespace std;

vector <bool> visited;

class Connect_Find
{
    int V;
    list <int> *adj;

public:
    Connect_Find(int m)
    {
        V=m ;
        adj=new list<int>[V+1];
        visited.resize(V+1,false);
    }

    void addedge(int v,int w)
    {
        adj[v].push_back(w);
    }
    void DFS(int s);
};

void Connect_Find::DFS(int s)
{
    visited[s]=true;

    list <int>::iterator it;
    for(it=adj[s].begin();it!=adj[s].end();it++)
    {
        if(!visited[*it])
        {
            DFS(*it);
        }
    }
}

int main()
{
    int V;
    cout<<"\nNumber of vertex->";
    cin>>V;
    Connect_Find g(V);
    int E,v,w;
    cout<<"\nNumber of edge->";
    cin>>E;
    for(int i=0;i<E;i++)
    {
        cin>>v>>w;
        g.addedge(v,w);//edge v to w
        g.addedge(w,v);//becoz it is a undirected graph w to v link
    }

    int connected_ct=0;
    for(int i=0;i<V;i++)
    {
       if(!visited[i])
          {
              g.DFS(i);
              connected_ct++;
          }
    }
    cout<<"\nNumber of connected components->"<<connected_ct;
   return 0;
}
