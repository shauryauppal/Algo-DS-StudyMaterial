#include <bits/stdc++.h>
using namespace std;
//STRUCTURE OF TREE
struct node
{
    int data;
    node *left,*right;
};
//NSERTION IN TREE
void insert(node* head,node* ptr)
{
    char choi;
    cout<<"\nInsert in left (l or L) or right (r or R)->";
    cin>>choi;
    if(choi=='l' || choi=='L')
    {
        if(head->left==NULL)
            head->left=ptr;
        else
            insert(head->left,ptr);
    }
    else
    {
        if(head->right==NULL)
            head->right=ptr;
        else
            insert(head->right,ptr);
    }
}
//NLR
void preorder(node *ptr)
{
    if(ptr!=NULL)
    {
        cout<<ptr->data<<'\t';
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
//LRN
void postorder(node *ptr)
{
    if(ptr!=NULL)
    {

        postorder(ptr->left);
        postorder(ptr->right);
        cout<<ptr->data<<'\t';
    }
}
//LNR
void inorder(node *ptr)
{
    if(ptr!=NULL)
    {

        inorder(ptr->left);
        cout<<ptr->data<<'\t';
        inorder(ptr->right);

    }
}
//MAXIMUM HEIGHT OF TREE
int maxdepth(node *ptr)
{
    if(ptr==NULL)
        return 0;
    else
    {
        int ldepth=maxdepth(ptr->left);
        int rdepth=maxdepth(ptr->right);
        if(ldepth>rdepth)
            return (ldepth+1);
        else return (rdepth+1);
    }
}
//NUMBER OF LEAF NODES
int countleaf(node *ptr)
{
    if(ptr==NULL)
        return 0;
    else if(ptr->left==NULL && ptr->right==NULL)
        return 1;
    else
        return countleaf(ptr->left)+countleaf(ptr->right);
}
int main()
{
    node *root=NULL;
    node *ptr=NULL;
    int ch,n;
    char choi;
    do
    {
        cout<<"1.Insert data\n2.Preorder\n3.Postorder\n4.Inorder\n5.Height\n6.Count leaves\n=>";
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
            {
                root=ptr;
            }
            else
            insert(root,ptr);
        }
        else if(ch==2)
        {
            preorder(root);
        }
        else if(ch==3)
            postorder(root);
        else if(ch==4)
            inorder(root);
        else if(ch==5)
            cout<<maxdepth(root);
        else if(ch==6)
            cout<<countleaf(root);

            cout<<"\nDo u want to contd(y/n)";
            cin>>choi;
    }while(choi=='y');
    return 0;
}
