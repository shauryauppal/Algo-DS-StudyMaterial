#include <bits/stdc++.h>
using namespace std;
int Tree[3000],lazy[3000];
void create_tree(int A[],int start,int end,int pos)
{
    if(start==end)
    {
        Tree[pos]=A[start];
        return;
    }
    int mid=(start+end)/2;
    create_tree(A,start,mid,2*pos);
    create_tree(A,mid+1,end,2*pos+1);
    Tree[pos]=Tree[2*pos]+Tree[2*pos+1];
}
void update_range(int start,int end,int l,int r,int pos,int val)
{
    if(lazy[pos]!=0)
    {
        Tree[pos]+=(end-start+1)*lazy[pos];
        if(start!=end)
        {
            lazy[2*pos] += lazy[pos];
            lazy[2*pos+1] += lazy[pos];
        }
        lazy[pos]=0;
    }
    if(start>r || end<l)
    {
        return;//out of bound
    }
    if(start >=l && end<=r)
    {
        //in bound
        Tree[pos]+=(end-start+1)*val;
        if(start!=end)
        {
            lazy[2*pos]+=val;
            lazy[2*pos+1]+=val;
        }
        return;
    }
    int mid=(start+end)/2;
    update_range(start,mid,l,r,2*pos,val);
    update_range(mid+1,end,l,r,2*pos+1,val);
    Tree[pos]=Tree[2*pos]+Tree[2*pos+1];
}

int query(int start,int end,int l,int r,int pos)
{
    if(start>r || end<l)
    {
        return 0;
    }
    if(lazy[pos]!=0)
    {
        Tree[pos]+=lazy[pos]*(end-start+1);
        if(start!=end)
        {
            lazy[2*pos]+=lazy[pos];
            lazy[2*pos+1]+=lazy[pos];
        }
        lazy[pos]=0;
    }
    if(l<=start && end<=r)
    {
        return Tree[pos];
    }
    int mid = (start+end)/2;
    int p1=query(start,mid,l,r,2*pos);
    int p2=query(mid+1,end,l,r,2*pos+1);
    return p1+p2;
}

int main()
{
    int n;
    cout<<"\nEnter Array size and Elements->";
    cin>>n;
    int A[n];
    memset(Tree,0,sizeof(Tree));
    memset(lazy,0,sizeof(lazy));

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    create_tree(A,0,n-1,1);
    int q;
    cout<<"\nEnter Number of Queries->";
    cin>>q;
    while(q--)
    {
        int ch;
        cout<<"\n1.To update range";
        cout<<"\n2.To query\n";
        cout<<"=>";
        cin>>ch;
        if(ch==1)
        {
            int l,r,val;
            cin>>l>>r;
            cout<<"\nVal->";
            cin>>val;
            update_range(0,n-1,l,r,1,val);
        }
        if(ch==2)
        {
            int l,r;
            cin>>l>>r;
            cout<<query(0,n-1,l,r,1)<<'\n';
        }
    }
    return 0;
}
