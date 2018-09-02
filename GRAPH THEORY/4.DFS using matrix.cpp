#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    int **Adj;
public:
    Graph(int m)
    {
        V=m;
        Adj=new int *[V];
        for(int i=0;i<V;i++)
        {
            Adj[i]=new int[V];
        }
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
                Adj[i][j]=0;
        }
    }
    void addedge(int v,int w)
    {
        Adj[v][w]=1;//edge from v to w
    }
    void DFS(int s);
};
void Graph::DFS(int s)
{
    vector <bool> visited(V,false);

    stack <int> s1;
    visited[s]=true;
    s1.push(s);

    while(!s1.empty())
    {
        s=s1.top();
        cout<<s<<' ';
        s1.pop();

        for(int j=0;j<V;j++)
        {
            if(Adj[s][j]==1)
            {
                if(!visited[j])
                {
                    visited[j]=true;
                    s1.push(j);
                }
            }
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
