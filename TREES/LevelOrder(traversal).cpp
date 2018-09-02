#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left,*right;
};
void insert(node *head,node *ptr)
{
    char choi;
    cout<<"\nInsert in left  (l) or right (r)->";
    cin>>choi;
    if(choi=='l')
    {
        if(head->left==NULL)
            head->left=ptr;
        else insert(head->left,ptr);
    }
    else
    {
        if(head->right==NULL)
            head->right=ptr;
        else insert(head->right,ptr);
    }
}
void printgivenlevel(node *head,int level)
{
    if(head==NULL)
        return;
    if(level==0)
        cout<<head->data<<'\t';
    else if(level>0)
    {
        printgivenlevel(head->left,level-1);
        printgivenlevel(head->right,level-1);
    }
}
int height (node *ptr)
{
    if(ptr==NULL)
        return 0;
    else
        {
    int lheight=height(ptr->left);
    int rheight=height(ptr->right);
    if(lheight>rheight)
        return lheight+1;
    else
    return rheight+1;
        }
}
void levelorder(node *head)
{
    int H=height(head);
    cout<<"\nHeight->"<<H<<'\n';
    for(int i=0;i<=H;i++)
        printgivenlevel(head,i);
}

int main()
{
    node *root=NULL,*ptr=NULL;
    int ch,n;
    char choi;
    do
    {
        cout<<"1.Insert data\n2.Level Order\n=>";
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
            else insert(root,ptr);
        }
        else if (ch==2)
        {
            levelorder(root);
        }
        cout<<"\nDo u want to contd(y/n)->";
        cin>>choi;
    }while(choi=='y');
    return 0;
}
