#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         string x;
         set <string> s;
         int n;
         cin>>n;
         for(int i=0;i<n;i++)
         {
             cin>>x;
             s.insert(x);
         }

         set <string> ::iterator it;
         for(it=s.begin();it!=s.end();it++)
            cout<<*it<<'\n';
    }
}
