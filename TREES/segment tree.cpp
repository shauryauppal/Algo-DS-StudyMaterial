#include <bits/stdc++.h>
using namespace std;
void create_tree(int A[],int Tree[],int l,int h,int pos)
{
    if(l==h)
    {
        Tree[pos]=A[l];
        return;
    }
    int mid=(l+h)/2;
    create_tree(A,Tree,l,mid,2*pos+1);
    create_tree(A,Tree,mid+1,h,2*pos+2);
    Tree[pos]=Tree[2*pos+1]+Tree[2*pos+2];
}
int query(int Tree[],int qlow,int qhigh,int l,int h,int pos)
{
    if(qlow<=l && qhigh>=h)//total overlap
    {
        return Tree[pos];
    }
    if(qlow>h || qhigh<l)//no overlap
    {
        return 0;
    }
    int mid=(l+h)/2;
    int p1=query(Tree,qlow,qhigh,l,mid,2*pos+1);
    int p2=query(Tree,qlow,qhigh,mid+1,h,2*pos+2);

    return p1+p2;
}
int main()
{
    int n;
    cout<<"Enter size of array->";
    cin>>n;//size of array
    int A[n],Tree[2*n-1];

    cout<<"\nEnter elements of array->";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];//input of array
    }
    create_tree(A,Tree,0,n-1,0);


    int qlow,qhigh;
    cout<<"\nEnter query range->";
    cin>>qlow>>qhigh;
    int result=query(Tree,qlow,qhigh,0,n-1,0);

    cout<<"\nResult->"<<result;
    return 0;

}
