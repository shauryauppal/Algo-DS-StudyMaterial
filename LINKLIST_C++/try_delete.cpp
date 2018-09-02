#include <bits/stdc++.h>
using namespace std;
struct node
{
    string data;
    node *next;
    node *down;
}*top=NULL,*end=NULL,*cur=NULL,*start=NULL,*ptr=NULL,*ptr1=NULL;
void insert_down(string n)
{
    ptr=new node;
    ptr->data=n;
    ptr->next=NULL;
    ptr->down=NULL;

    if(top==NULL)
    {
        top=cur=ptr;
    }
    else
    {
        cur->down=ptr;
        cur=ptr;
    }
}
void insert_next(string n)
{
    start=end=cur->next;
    ptr1=new node;
    ptr1->data=n;
    ptr1->next=NULL;
    ptr1->down=NULL;

    if(start==NULL)
    {
        cur->next=ptr1;
        start=end=ptr1;
    }
    else
    {
        end->next=ptr1;
        end=ptr1;
    }
}
void display()
{
    ptr=top;
    while(ptr!=NULL)
    {
        ptr1=ptr->next;
        while(ptr1!=NULL)
        {
            cout<<ptr1->data<<" ";
            ptr1=ptr1->next;
        }
        ptr=ptr->next;
    }
}
int main()
{
     int ch;
     char choi;
     string n;
     do
     {
         cout<<"\n1.Insert down\n2.Insert next\n3.display\n";
         cin>>ch;

         if(ch==1)
         {
             cout<<"\nData->";
             cin>>n;
             insert_down(n);
         }
         else if(ch==2)
         {
                  cout<<"\nData->";
             cin>>n;
             insert_next(n);
         }
         else if(ch==3)
            display();
         cout<<"\nDo u want to contd(y/n)=>";
         cin>>choi;
     }while(choi=='y');
     return 0;
}
