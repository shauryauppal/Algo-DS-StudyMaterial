//SPOJ question JNEXT


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    vector<int> B;
    A[-1]=0;
    int temp=0,x,k,flag=0;

    for(int i=n-1;i>=1;i--)
    {
        if(A[i]>A[i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<-1<<'\n';
        continue;
    }

    for(int i=n-1;i>=0;i--)
    {
        if(A[i]<=A[i-1])
        {
            B.push_back(A[i]);
        }
        else
        {
            B.push_back(A[i]);
            temp=A[i-1];
            k=i-1;
            break;
        }
    }
    vector <int> ::iterator it;
    for(it=B.begin();it!=B.end();it++)
        {
            if(*it>temp)
            {
                x=*it;
                *it=temp;
                break;
            }
        }
        A[k]=x;
        for(int i=0;i<=k;i++)
            cout<<A[i];
        for(it=B.begin();it!=B.end();it++)
            cout<<*it;

            cout<<'\n';
    }
        return 0;
}
