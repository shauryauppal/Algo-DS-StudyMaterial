#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL)
vector <int> visited;
class Graph
{
    int V,E;
    list <int> *adj;
public:
    Graph(int x)
    {
        V=x;
        visited.resize(V+1,false);
        adj=new list <int> [V+1];
    }
    void addedge(int u,int v)
    {
        adj[u].push_back(v);//undirected graph
        adj[v].push_back(u);
    }
    bool isCyclic(int s,int parent)
    {
        visited[s]=true;
        list<int> ::iterator it;
        for(it=adj[s].begin();it!=adj[s].end();it++)
        {
            if(!visited[*it])
                isCyclic(*it,s);
            else if(*it!=parent)
            {
                return true;//we have a cycle
            }
        }
        return false;//no cycle
    }
    bool isTree()
    {
        if(isCyclic(1,-1))
            return false;//not a tree
        for(int i=1;i<=V;i++)
        {
            if(!visited[i])
            {
                return false;//we have a unconnected component so not a tree
            }
        }
        return true;//it is a tree
    }
};
int main()
{
    //for tree or not tree
    //check all components connected and no node is revisited
   fastIO;
   int V,E,u,v;
   cin>>V>>E;
   Graph g(V);
   for(int i=1;i<=E;i++)
   {
       cin>>u>>v;
       g.addedge(u,v);
   }
   if(g.isTree())
    cout<<"YES\n";
   else cout<<"NO\n";

   return 0;
}
