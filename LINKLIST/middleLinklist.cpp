#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
}*root=NULL;
struct Node* createNode(int x)
{
    Node *ptr= new Node;
    ptr->data=x;
    ptr->next=NULL;
    return ptr;
}

Node * InsertNode(int x)
{
    if(root==NULL)
        {
            return createNode(x);
        }
    else
    {
        Node * cur=root;
        while(cur->next!=NULL)
            cur=cur->next;
        cur->next = createNode(x);
        cur=cur->next;
    }
    return root;
}
void display(Node * root)
{
    Node *ptr=root;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<'\n';
        ptr=ptr->next;
    }
}
int find_mid(Node *root)
{
    Node *ptr=root,*cur=root;
    while(cur->next->next!=NULL || cur!=NULL)
    {
        ptr = ptr->next;
        cur= cur->next->next;
    }
    return ptr->data;
}

Node* reverse(Node *head)
{
  // Your code here
  Node *next=NULL,*prev=NULL,*cur=head;
  while(cur!=NULL)
  {
      next=cur->next;
      cur->next=prev;
      prev=cur;
      cur=next;
  }
  return prev;
}

int main()
{
    int ch;
    char choi;
    do
    {
        cout<<"1.Insert at back:\n";
        cout<<"2.Print\n";
        cout<<"3.Find Middle\n";
        cout<<"4.Reverse LinkList\n";
        cout<<"5.Exit\n";
        cin>>ch;

        if(ch==1)
        {
            int x;
            cin>>x;
            root = InsertNode(x);
        }
        else if(ch==2)
        {
            display(root);
        }
        else if(ch==3)
        {
            cout<<find_mid(root)<<'\n';
        }
        else if(ch==4)
        {
            root = reverse(root);
            display(root);
        }
        else
            exit(0);

        cout<<"\nDo you want to Contd\n";
        cin>>choi;
    }while(choi=='y');
}
