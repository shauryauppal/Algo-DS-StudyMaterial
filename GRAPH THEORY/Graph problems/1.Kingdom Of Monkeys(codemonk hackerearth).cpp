#include <bits/stdc++.h>
using namespace std;
int V,E,v,w;
vector <bool> visited;
list <int> *adj;
vector <long long> A;


long long DFS(int s,long long sum)
{
    visited[s]=true;
    sum=sum+A[s];
    //cout<<sum<<' ';
    int flag=0;
    list<int>::iterator it;
    for( it=adj[s].begin();it!=adj[s].end();it++ )
    {
         flag=0;
        if(!visited[*it])
        {
            flag=1;
            //cout<<*it<<' ';
          sum=sum+DFS(*it,sum);
        }

    }
    if(flag==0)
   return sum;


}

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
       cin>>V>>E;
       visited.resize(V+1,false);

       A.resize(V+1,-1);


       adj=new list<int>[V+1];

       for(int i=1;i<=E;i++)
       {
           cin>>v>>w;
           adj[v].push_back(w);
           adj[w].push_back(v);
       }

       for(int i=1;i<=V;i++)
       {
           cin>>A[i];
       }



       long long temp,max=-1;
       for(int i=1;i<=V;i++)
       {
           if(!visited[i])
           {
               temp=DFS(i,0);
               if(max<temp)
               {
                   max=temp;
               }
           }
       }
       cout<<max<<'\n';

      visited.clear();
      A.clear();
    }
   return 0;
}
