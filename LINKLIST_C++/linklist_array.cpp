#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node *down;
}*top=NULL,*cur=NULL,*start=NULL,*end=NULL,*ptr1=NULL,*ptr=NULL;
void insert(int n,int flag)
{
    if(flag==1)
    {
        //new node created
        ptr=new node;
        ptr->data=n;//name given
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
    else
  {
        start=end=ptr->next;
            ptr1=new node;
            ptr1->data=n;
            ptr1->down=NULL;
            ptr1->next=NULL;

            if(start==NULL)
            {
                ptr->next=ptr1;
                start=end=ptr1;
            }
            else
            {
                end->next=ptr1;
                end=ptr1;
            }
        }
   }
void display()
{
    ptr=top;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr1=ptr->next;
        while(ptr1!=NULL)
        {

            cout<<(ptr1->data)<<" ";
            ptr1=ptr1->next;
        }
        ptr=ptr->down;
    }
}


int main()
{
    int r,c;
    cout<<"\nEnter array dimensions->";
    cin>>r>>c;
    int arr[r*c];
    int x=0,y=0;
    for(int i=0;i<r*c;i++)
    {
        if(y==c)
        {
            x++;y=0;
        }
        cout<<"\nElement "<<x<<":"<<y<<"->";
        cin>>arr[i];
        y++;
    }
    x=0; y=0;
    for(int i=0;i<r*c;i++)
    {
        if(y==c)
        {
            y=0;x++;
        }
        //if one means insert down else insert at next
        if(y==0)
        {
            //down insert
            insert(arr[i],1);
        }

        if(y!=0)
        {
           insert(arr[i],0);
        }
        y++;
    }
display();
return 0;
}
