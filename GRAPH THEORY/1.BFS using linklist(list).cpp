//BFS using list list
#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list <int> *adj;
public:
    Graph(int m)
    {
        V=m;
        adj=new list<int>[V];
    }
    void addedge(int v,int w)
    {
        adj[v].push_back(w);//link(edge) from v to w added
    }
    void BFS(int s);
};
void Graph::BFS(int s)
{
    //mark visted of all nodes false
    bool visited[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;//all initially marked false
    }

    queue<int> q;
    //mark source visited andpush in queue
    visited[s]=true;
    q.push(s);

    list<int> ::iterator it;

    while(!q.empty())
    {
        s=q.front();
        cout<<s<<' ';
        q.pop();

        for(it=adj[s].begin();it!=adj[s].end();it++)
        {
            if(!visited[*it])
            {
                visited[*it]=true;
                q.push(*it);
            }
        }
    }

}
int main()
{
    Graph g(4);
    int E;
    cout<<"Enter number of edges->";
    cin>>E;

    int v,w;
    cout<<"\nEnter edge start and end->";
    for(int i=0;i<E;i++)
    {
        cin>>v>>w;
        g.addedge(v,w);
    }

    cout<<"\nBFS from vertex 2->";
        g.BFS(2);

        return 0;
}
