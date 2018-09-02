//Final full complete program correct
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
//struct declaration
struct node
{
    int data;
    struct node *left,*right;
}*ptr=NULL;
//insetion process
void insert(node *head,node *ptr)
{
    char choi;
   cout<<"\nInsert value in left (l or L) or right(r or R)->";
   cin>>choi;
   if(choi=='l' || choi=='L')
   {
       if(head->left==NULL)
        head->left=ptr;
       else
        insert(head->left,ptr);
   }
   else//insert in right
   {
       if(head->right==NULL)
        head->right=ptr;
       else
        insert(head->right,ptr);
   }
}
//NLR format
void preorder(node* ptr)
{
    if(ptr!=NULL);
    {
        cout<<ptr->data<<'\t';
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
//LNR format
void inorder(node *ptr)
{
    if(ptr!=NULL)
    {
        inorder(ptr->left);
        cout<<ptr->data<<'\t';
        inorder(ptr->right);
    }
}
//LRN format
void postorder(node *ptr)
{
    if(ptr!=NULL)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        cout<<ptr->data<<'\t';
    }
}
int maxdepth(node *ptr)
{
    if(ptr==NULL)
    return 0;
    else
    {
        int lheight=maxdepth(ptr->left);
        int rheight=maxdepth(ptr->right);
        if(lheight>rheight)
        {
            return(lheight+1);
        }
        else
        {
            return (rheight+1);
        }
    }
}
//GIVING PROBLEM SOMWHERE
int countleaves(node *ptr)
{
    if(ptr->left==NULL && ptr->right==NULL)
        return 1;
    else return (countleaves(ptr->left)+countleaves(ptr->right));
}
int main()
{
    node *root=NULL;
    int ch,n;
    char choi;
    do
    {
        cout<<"1.Insert data->\n2.Preorder traversal\n3.Postorder traversal\n4.Inorder traversal\n5.Find depth\n6.Countleaves\n=>";
        cin>>ch;
        if(ch==1)
        {
           cout<<"\nEnter data->";
           cin>>n;
           ptr=new node;
           ptr->data=n;
           ptr->left=NULL;
           ptr->right=NULL;
           if(root==NULL)
            root=ptr;
           else
           insert(root,ptr);
        }
        else if(ch==2)
            preorder(root);
            else if(ch==3)
                postorder(root);
            else if(ch==4)
                inorder(root);
                else if(ch==5)
                {
                    int depth=maxdepth(root);
                    cout<<"\nDepth of tree is->"<<depth<<'\n';
                }
                else if(ch==6)
                {
                    int ct=countleaves(root);
                    cout<<"\nNo. of leaf nodes in tree are->"<<ct<<'\n';
                }

     cout<<"\nDo you want to contd(y/n)->";
     cin>>choi;
    }while(choi=='y');

    return 0;
}
