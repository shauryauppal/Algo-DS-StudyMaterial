#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
typedef struct Node
{
    int data;
    Node *next;
};
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission.
  // You only need to complete this method
    Node *curA,*curB;
    int ctA=0,ctB=0;
    curA=headA;curB=headB;
    if(headA==NULL || headB==NULL)
        return 0;
    while(curA->next!=NULL)
    {ctA++;
     curA=curA->next;
    }
    while(curB->next!=NULL)
    {ctB++;
     curB=curB->next;
    }
    if(ctA!=ctB)
        return 0;
    if(ctA==ctB)
        {
        curA=headA;curB=headB;
        while(curA->next!=NULL || curB->next!=NULL)
            {
            if(curA->data!=curB->data)
                {
                return 0;
            }
            curA=curA->next;
            curB=curB->next;
            }
        return 1;
    }
    return 0;

}
struct Node* insert_beg(Node *top,int x)
{
    Node *ptr;
    ptr=(Node *)malloc(sizeof(Node));
    ptr->data=x;
    ptr->next=NULL;
    if(top==NULL)
    {
        top=ptr;
    }
    else{ptr->next=top;
    top=ptr;}

    return top;
}
void display(Node *top)
{
    Node *ptr;
    ptr=top;
    if(ptr==NULL)
    {
        cout<<"\nList is empty\n";
    }
    else
    {
        while(ptr!=NULL)
        {
            cout<<ptr->data<<'\t';
            ptr=ptr->next;
        }
    }
}
struct Node * merge(Node *headA,Node *headB)
{
     Node *ptr=NULL,*curA=headA,*curB=headB;
     while(curA->next!=NULL && curB->next!=NULL)
     {
         if(curA->data>curB->data)
         {
             ptr->data=curB->data;
             ptr=ptr->next;
             curB=curB->next;
         }
         else if(curA->data<curB->data)
         {
             ptr->data=curA->data;
             ptr=ptr->next;
             curA=curA->next;
         }
         else if(curA->data==curB->data)
         {
             ptr->data=curA->data;
             ptr=ptr->next;
             curA=curA->next;
             ptr->data=curB->data;
             curB=curB->next;
             ptr=ptr->next;
         }
     }
     if(curA->next!=NULL)
     {
         ptr->data=curA->data;
         ptr=ptr->next;
         curA=curA->next;
     }
     if(curB->next!=NULL)
     {
         ptr->data=curB->data;
         ptr=ptr->next;
         curB=curB->next;
     }
     return ptr;
}
int main()
{
    Node *headA,*headB,*headC;
    headA=NULL;
    headB=NULL;
    headC=NULL;
    int ch,x;
    char choi;
    do
    {
        cout<<"1.Insert in linklist A\n2.Insert in linklist B\n3.Display linklist A\n4.Display linklist B\n5.Compare A & B\n6.Merge A & B\n=>";
        cin>>ch;
        if(ch==1)
        {
            cout<<"\nEnter the element to insert->";
            cin>>x;
            headA=insert_beg(headA,x);
        }
        else if(ch==2)
        {
            cout<<"\nEnter the element to insert->";
            cin>>x;
            headB=insert_beg(headB,x);
        }
        else if(ch==3)
        {
            display(headA);
        }
        else if(ch==4)
        {
            display(headB);
        }
        else if(ch==5)
        {
            int p=CompareLists(headA,headB);
            cout<<p<<'\n';
        }
        else if (ch==6)
        {
             headC=merge(headA,headB);
             display(headC);
        }

        cout<<"\nDo you want to contd(y/n)->";
        cin>>choi;cout<<'\n';
    }while(choi=='y');
}
