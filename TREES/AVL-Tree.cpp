#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left,*right;
    int height;
};
//function for new node insertion
struct node * newnode(int n)
{
   node *ptr;
   ptr=new node;
   ptr->data=n;
   ptr->left=ptr->right=NULL;
   ptr->height=1;//new node is initially added as leaf
   return ptr;
}
//Function to get height of tree
int height(node *ptr)
{
    if(ptr==NULL)
        return 0;
    return ptr->height;
}
struct node * leftrotate(node *x)
{
   node *y=x->right;
   node *T2=y->left;

   //PERFORM ROTATION
   y->left=x;
   x->right=T2;

   //UPDATE HEIGHTS
   x->height=max(height(x->left),height(x->right))+1;
   y->height=max(height(y->left),height(y->right))+1;

   //new root
   return y;

}
struct node * rightrotate(node * x)
{
    node * y=x->left;
    node * T3=y->right;

    //PERFORM ROTATION
    y->right=x;
    x->left=T3;

    //UPDATE HEIGHT
    y->height=max(height(y->left),height(y->right))+1;
    x->height=max(height(x->left),height(x->right))+1;

    //return new root
    return y;
}
//GET BALANCE FACTOR OF NODE N
int balancefactor(node *ptr)
{
    if(ptr==NULL)
        return 0;

    return height(ptr->left)-height(ptr->right);
}
//Function for insertion process
struct node * insert(node *head,int key)
{
    /*PERFORM THE NORMAL BST*/
    if(head==NULL)
        return newnode(key);

    if(key<head->data)
        head->left=insert(head->left,key);
    else if(key>head->data)
    {
        head->right=insert(head->right,key);
    }
    /*UPDATE HEIGHT OF THIS ANCESTOR NODE*/
    head->height=max(height(head->left),height(head->right))+1;
    /*GET THE BALANCE FACTOR OF THIS ANCESTOR NODE TO CHECK WHETHER
    NODE BECOMES UNBALANCED*/
    int balance=balancefactor(head);

    //IF THIS NODE BECOMES UNBALANCE THERE ARE 4 CASES

    //LEFT LEFT CASE
    if( balance>1 && key < head->left->data)
    {
         return rightrotate(head);
    }
    //RIGHT RIGHT CASE
    if(balance<-1 && key>head->right->data)
    {
        return leftrotate(head);
    }
    //LEFT RIGHT CASE
    if(balance>1 && key>head->left->data)
    {
        head->left=leftrotate(head->left);
        return rightrotate(head);
    }
    //RIGHT LEFT CASE
    if(balance<-1 && key<head->right->data)
    {
        head->right=rightrotate(head->right);
        return leftrotate(head);
    }

    /*RETURN THE (UNCHANGED) NODE POINTER*/
    return head;
}
void inorder(node *head)
{
    if(head==NULL)
        return;

    stack <node *> s1;
    node *current=head;
  while(1)
  {
      if(current!=NULL)
       {
          s1.push(current);
          current=current->left;
       }
    else
    {
        if(s1.empty()==false)
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
int depth(node *ptr)
{
    if(ptr==NULL)
        return 0;
    else
    {
        int lheight=depth(ptr->left);
        int rheight=depth(ptr->right);
        if(lheight>rheight)
            return lheight+1;
        else return rheight+1;
    }
}
void printgivenlevel(node *head,int level)
{
    if(head==NULL)
        return;
    else if(level==1)
        cout<<head->data<<'\t';
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
    int H=depth(head);
    for(int i=1;i<=H;i++)
        printgivenlevel(head,i);
}
struct node * minvaluenode(node *head)
{
    node *ptr=head;
    while(ptr->left!=NULL)
    {
        ptr=ptr->left;
    }
    return ptr;
}
struct node *deletenode(node *head,int key)
{
    //1.follow normal bst deletion steps
    if(head==NULL)
        return head;
    if(key<head->data)
        head->left=deletenode(head->left,key);
    else if(key>head->data)
        head->right=deletenode(head->right,key);
    else
    {
        //delete node with no child or one child
        if(head->left==NULL)
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
        else //node have two child
        {
            //get successor node
            node *ptr=minvaluenode(head->right);
            head->data=ptr->data;
            //delete successor node
            head->right=deletenode(head->right,ptr->data);
        }
    }

    if(head==NULL)
        return head;

   //update height
   head->height=max(height(head->left),height(head->right))+1;

      int balance=balancefactor(head);

      //if unbalances tree

      //left left case
      if(balance>1 && balancefactor(head->left)>=0)
        return rightrotate(head);
      //left right case
      if(balance>1 && balancefactor(head->left)<0)
      {
          head->left=leftrotate(head->left);
          return rightrotate(head);
      }
      //right right case
      if(balance<-1 && balancefactor(head->right)<=0)
        return leftrotate(head);
      //right left case
      if(balance<-1 && balancefactor(head->right)>0)
      {
          head->right=rightrotate(head->right);
          return leftrotate(head);
      }
      //unchanged node return
      return head;
}
int main()
{
    node *root=NULL;
    int ch,n;
    char choi;
    do
    {
        cout<<"1.Insert data\n2.Inorder\n3.Levelorder\n4.Delete element\n=>";
        cin>>ch;
        if(ch==1)
        {
            cout<<"\nEnter element->";
            cin>>n;
            root=insert(root,n);
        }
        else if(ch==2)
            inorder(root);
        else if(ch==3)
           levelorder(root);
        else if(ch==4)
        {
            cout<<"\nEnter element to delete->";
            cin>>n;
            root=deletenode(root,n);
        }
        cout<<"\nDo u want to contd(y/n)->";
        cin>>choi;
    }while(choi=='y');
    return 0;
}
