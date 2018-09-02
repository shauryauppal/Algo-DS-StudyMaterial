#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left,*right;
};
void insert(node *head,node *ptr)
{
    char choi;
    cout<<"\nInsert in left (l) or right (r)->";
    cin>>choi;
    if(choi=='l')
    {
        if(head->left==NULL)
        {
            head->left=ptr;
        }
        else insert(head->left,ptr);
    }
    else
    {
        if(head->right==NULL)
            head->right=ptr;
        else insert(head->right,ptr);
    }
}
void preorderiterative(node *head)
{
    if(head==NULL)
     return;

    stack <node *> s1;
    node *ptr;
    s1.push(head);
    while(s1.empty()==false)
    {
        ptr=s1.top();
        cout<<ptr->data<<'\t';
        s1.pop();

        if(ptr->right)
            s1.push(ptr->right);
        if(ptr->left)
            s1.push(ptr->left);
    }
}
void postorderiterative(node *head)
{
    if(head==NULL)
        return;
    stack <node *> s1,s2;
    node *ptr=NULL;
    s1.push(head);
    while(s1.empty()==false)
    {
        ptr=s1.top();
        s1.pop();
        s2.push(ptr);

        if(ptr->left)
            s1.push(ptr->left);
        if(ptr->right)
            s1.push(ptr->right);
    }
    while(!s2.empty())
    {
        ptr=s2.top();
        s2.pop();
        cout<<ptr->data<<'\t';
    }
}
void inorderiterative(node *head)
{
    if(head==NULL)
        return;
    node *current=head;
    stack <node *> s1;
    while(1)
    {
        if(current!=NULL)
        {
            s1.push(current);
            current=current->left;
        }
        else
        {
            if(!s1.empty())
            {
                current=s1.top();
                s1.pop();
                cout<<current->data<<'\t';

                current=current->right;
            }
            else break;
        }
    }
}
int height(node *head)
{
    if(head==NULL)
        return 0;
    else
        {
    int lheight=height(head->left);
    int rheight=height(head->right);

    if(lheight>rheight)
        return lheight+1;
    else return rheight+1;
     }
}
int countleaf(node *ptr)
{
    if(ptr==NULL)
        return 0;
    else if(ptr->left==NULL && ptr->right==NULL)
        return 1;
    else
    {
        return countleaf(ptr->left)+countleaf(ptr->right);
    }
}
int main()
{
    node *root=NULL;
    node *ptr=NULL;
    int ch,n;
    char choi;
    do
    {
        cout<<"1.Insert element\n2.Preorder\n3.Postorder\n4.Inorder\n5.Height\n6.Count Leaves\n=>";
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
            preorderiterative(root);
        else if(ch==3)
            postorderiterative(root);
        else if(ch==4)
            inorderiterative(root);
        else if(ch==5)
            cout<<height(root);
        else if(ch==6)
            cout<<countleaf(root);

    cout<<"\nDo u want to contd(y/n)->";
    cin>>choi;
    }while(choi=='y');

    return 0;
}
