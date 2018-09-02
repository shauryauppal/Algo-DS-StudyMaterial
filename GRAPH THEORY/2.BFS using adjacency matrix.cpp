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
        Adj=new int*[V];
        for(int i=0;i<V;i++)
            Adj[i]=new int[V];
    }
    void addedge(int v,int w)
    {
        Adj[v][w]=1;//edge from v to w
    }
    void BFS(int s);
};
void Graph::BFS(int s)
{
    bool visited[V];
    for(int i=0;i<V;i++)
        visited[i]=false;

    queue<int> q;
    visited[s]=true;
    q.push(s);

    while(!q.empty())
    {
        s=q.front();
        cout<<s<<' ';
        q.pop();


          for(int j=0;j<V;j++)
      {
          if(Adj[s][j]==1)
          {
         if(!visited[j])
           {
              visited[j]=true;
              q.push(j);
           }
        }
      }
    }

}
int main()
{
    Graph g(4);
    int E,v,w,s;
    cout<<"\nEnter number of edges->";
    cin>>E;
    cout<<"\nEnter edges->\n";
    for(int i=0;i<E;i++)
    {
        cin>>v>>w;
        g.addedge(v,w);
    }
    cout<<"\nStarting vertex for BFS->";
    cin>>s;
    g.BFS(s);

    return 0;
}
