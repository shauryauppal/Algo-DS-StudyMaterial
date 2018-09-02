#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left,*right;
};
void insert(node *head,node *ptr)
{
    if(ptr->data<head->data)
    {
        if(head->left==NULL)
            head->left=ptr;
        else insert(head->left,ptr);
    }
    else if(ptr->data>head->data)
    {
        if(head->right==NULL)
            head->right=ptr;
        else insert(head->right,ptr);
    }
}
int height(node *ptr)
{
    if(ptr==NULL)
          return 0;
    else{
    int lheight=height(ptr->left);
    int rheight=height(ptr->right);

    if(lheight>rheight)
        return lheight+1;
        else return rheight+1;
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
void levelorder(node *head)
{
    int H=height(head);
    for(int i=0;i<=H;i++)
        printgivenlevel(head,i);
}
struct node * search(node *head,int key)
{
    if(head==NULL || head->data==key)
        return head;
        else if(key<head->data)
            search(head->left,key);
        else if(key>head->data)
            search(head->right,key);
}



struct node *minvaluenode(node *head)
{
   node * ptr=head;
   while(ptr->left!=NULL)
    ptr=ptr->left;

   return ptr;
}


struct node * deletenode(node *head,int key)
{
    if(head==NULL)
        return head;

    if(key>head->data)
        head->right=deletenode(head->right,key);

    else if(key<head->data)
        head->left=deletenode(head->left,key);
    else
    {
        if(head->left==NULL)
        {
            node * ptr=head->right;
            delete(head);
            return ptr;
        }
        else if(head->right==NULL)
        {
            node *ptr=head->left;
            delete(head);
            return ptr;
        }

        node *ptr=minvaluenode(head->right);
        head->data=ptr->data;
        head->right=deletenode(head->right,ptr->data);
    }

    return head;
}
int main()
{
    node *root=NULL;
    node *ptr=NULL;
    int ch,n;
    char choi;
    do
    {
        cout<<"1.Insert element\n2.Level order\n3.Search\n4.Delete\n=>";
        cin>>ch;
        if(ch==1)
        {
            cout<<"\nEnter element->";
            cin>>n;
            ptr=new node;
            ptr->data=n;
            ptr->left=NULL;
            ptr->right=NULL;
            if(root==NULL)
                root=ptr;
            else insert(root,ptr);
        }
        else if(ch==2)
            levelorder(root);
        else if(ch==3)
        {
            cout<<"\nEnter element to search->";
            cin>>n;
            ptr=search(root,n);
            if(ptr->data==n)
            cout<<"\nData "<<ptr->data<<" found !!!";
            else cout<<"\nNot found!!!";
        }
        else if(ch==4)
        {
            cout<<"\nEnter element to delete->";
            cin>>n;
            root=deletenode(root,n);
        }
        cout<<"\nDo u want to contd(y/n)->";
        cin>>choi;
    }while(choi=='y');
}


/*#include <bits/stdc++.h>
using namespace std;
struct node
{
    node *left,*right;
    int data;
};
node * newnode(int key)
{
    node *ptr=new node;
    ptr->data=key;
    ptr->left=ptr->right=NULL;
     return ptr;
}
node *insert(node *head,int key)
{
    if(head==NULL)
        return newnode(key);
    if(head->data > key)
    {
        head->left=insert(head->left,key);
    }
    else head->right=insert(head->right,key);

    return head;
}
node *search(node *root,int key)
{
    if(root==NULL || root->data==key)
        return root;

    if(root->data > key)
        return search(root->left,key);
    else return search(root->right,key);

    return NULL;//not found

}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout<<root->data<<' ';
        inorder(root->right);
    }
}
int height(node *ptr)
{
    if(ptr==NULL)
        return 0;
    else
    {
       int lheight=height(ptr->left);
        int rheight=height(ptr->right);
        return max(lheight+1,rheight+1);
    }
}
void printgivenlevel(node *head,int level)
{
    if(head==NULL)
        return;

    if(level==0)
        cout<<head->data<<' ';
    else
    {
        printgivenlevel(head->left,level-1);
        printgivenlevel(head->right,level-1);
    }
}
void levelorder(node *head)
{
    if(head==NULL)
        return;

    int H=height(head);
    for(int i=0;i<H;i++)
    {
       printgivenlevel(head,i);
    }
}

struct node *minvaluenode(node *head)
{
   node * ptr=head;
   while(ptr->left!=NULL)
    ptr=ptr->left;

   return ptr;
}
node * deletenode(node *head,int key)
{
    if(head==NULL)
    {
        return head;
    }

    if(head->data > key)
        head->left=deletenode(head->left,key);
    else if(head->data < key)
        head->right=deletenode(head->right,key);
    else//head->data==key
    {
        if(head->left==NULL)//one child
        {
            node *ptr=head->right;
            delete(head);
            return ptr;
        }
        else if(head->right==NULL)
        {
            node *ptr=head->left;
            delete(head);
            return ptr;
        }
        node *ptr=minvaluenode(head->right);
        head->data=ptr->data;
        head->right=deletenode(head->right,ptr->data);
    }
    return head;
}
int main()
{
    node *root=NULL;
    int ch;
    char choi;
    do
    {
        cout<<"1.Insert node";
        cout<<"\n2.Search element";
        cout<<"\n3.Inorder print";
        cout<<"\n4.Delete";
        cout<<"\n5.LevelOrder";
        cout<<"\n=>";
        cin>>ch;
        if(ch==1)
        {
            int x;
            cout<<"\nEnter element to insert->";
            cin>>x;
            root=insert(root,x);
        }
        else if(ch==2)
        {
            int x;
            cout<<"\nEnter element to search->";
            cin>>x;
            node *ptr=search(root,x);
            if(ptr->data==x)
                cout<<"\nFound element";
                else cout<<"\nNot found";
        }
        else if(ch==3)
        {
            inorder(root);
        }
        else if(ch==4)
        {
            int x;
            cout<<"\nEnter element to delete->";
            cin>>x;
            root=deletenode(root,x);
        }
        else if(ch==5)
        {
            levelorder(root);
        }

    cout<<"\nDo you want to contd(y/n)->";
    cin>>choi;
    }while(choi=='y');
    return 0;
}
*/
