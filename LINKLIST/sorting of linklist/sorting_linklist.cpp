#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
struct node {int info;
struct node *next;}*cur,*top=NULL,*ptr;
//inertion in beginning WORKING FINE
void insert_beg(int x)
{
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->info=x;
    ptr->next=NULL;
    if(top==NULL)
    {
        top=ptr;
    }
    else{ptr->next=top;
    top=ptr;}
}
//insertion in end WORKING FINE
void insert_end(int x)
{
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->info=x;
    ptr->next=NULL;
    if(top==NULL)
    {
        top=ptr;
        cur=ptr;
    }
    else
        {cur=top;
          while(cur->next!=NULL)
          {
              cur=cur->next;
          }
          cur->next=ptr;
          cur=ptr;
        }
}
void display()
{
    ptr=top;
    if(ptr==NULL)
    {
        cout<<"\nList is empty\n";
    }
    else
    {
        while(ptr!=NULL)
        {
            cout<<ptr->info<<'\t';
            ptr=ptr->next;
        }
    }
}
//sorting not working as per requirement
void sort_exist()
{
    //bubble sor concept is used in this code
    cur=top;ptr=top;
    while(ptr!=NULL)
    {
        while(cur->next!=NULL)
        {
            if(cur->info>cur->next->info)
            {
                //swapping the values is done here
                int temp=cur->info;
                cur->info=cur->next->info;
                cur->next->info=temp;
            }
            cur=cur->next;
        }
        ptr=ptr->next;
    }
}
int main()
{
    int ch,x,pos;
    char choi;
    do
    {
        cout<<"1.Insert in beginning\n2.Insert in end\n3.Sort existing link list\n4.Display\n=>";
        cin>>ch;
        if(ch==1)
        {cout<<"\nEnter element you want to insert->";
            cin>>x;
            insert_beg(x);
        }
        else if(ch==2)
        {cout<<"\nEnter element you want to insert->";
            cin>>x;
            insert_end(x);
        }
        else if(ch==3)
            {sort_exist();
            display();}
        else if(ch==4)
            display();
        cout<<"\nDo u want to contd(y/n)->";
        cin>>choi;
        cout<<'\n';
    }while(choi=='y');
    return 0;
}
