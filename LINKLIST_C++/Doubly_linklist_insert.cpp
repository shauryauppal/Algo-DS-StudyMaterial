 #include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
}*top=NULL,*ptr;
void insert_begin(int n)
{
    //1.new node created
    ptr=new node;
    //2.data input
    ptr->data=n;
    //3.initialize
    ptr->next=top;
    ptr->prev=NULL;
    //4.conditions
    if(top==NULL)
    {
        top=ptr;
    }
    else
    {
        top->prev=ptr;
        top=ptr;
    }
}
void insert_end(int n)
{
    node *cur=top;
    ptr=new node;
    ptr->data=n;

    ptr->next=NULL;

    if(top==NULL)
        {
            ptr->prev=NULL;
            top=ptr;
        }
    else
        {
            while(cur->next!=NULL)
                cur=cur->next;

            cur->next=ptr;
            ptr->prev=cur;
            cur=ptr;
        }
}
//this is not working
void insert_mid(int n,int pos)
{
    //n here is the data and pos is position of insertion of data
    ptr=new node;
    //data given
    ptr->data=n;

    if(top==NULL)
    {
        top=ptr;
    }
    else
    {
        node *cur=top;
        int i=1;
        //putting cur to that position
        while(i+1!=pos)
        {
            cur=cur->next;
            i++;
        }
        //insertion process
        ptr->next=cur->next;
        cur->next=ptr;
        ptr->prev=cur;

        //if(ptr->next!=NULL)
        ptr->next->prev=ptr;
    }
}
void SortedInsert(int n)
{
    // Complete this function
   // Do not write the main method.
    node *ptr;
    ptr=new node;
    ptr->data=n;
    if(top==NULL)
        {ptr->next=NULL;
         ptr->prev=NULL;
        top=ptr;}
    else
        {
          node *cur=top;
        while(cur->next->data<ptr->data)
            {
               cur=cur->next;
            }
        ptr->next=cur->next;
        cur->next=ptr;
        ptr->prev=cur;

        if(ptr->next!=NULL)
            {ptr->next->prev=ptr;}
    }
//    return head;
}

void display()
{
    node *last;
    //forward traverse
    ptr=top;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        last=ptr;
        ptr=ptr->next;
    }
    //traverse backward
    cout<<'\n';
    while(last!=NULL)
    {
        cout<<last->data<<" ";
        last=last->prev;
    }
}

int main()
{
    int n,ch;
    char choi;
    do
    {
        cout<<"\n1.Insert data in beginning\n2.Insert data in end\n3.Insert at a position\n4.Display\n5.Insert in sorted linklist\n";
        cin>>ch;
        if(ch==1)
        {
            cout<<"\nEnter data->";
            cin>>n;
            insert_begin(n);
        }
        else if(ch==2)
        {
            cout<<"\nEnter data->";
            cin>>n;
            insert_end(n);
        }
        else if(ch==3)
        {
            int pos;
            cout<<"\nEnter data and position->";
            cin>>n>>pos;
            insert_mid(n,pos);
        }
        else if(ch==4)
        {
            display();
        }
        else if(ch==5)
        {
            cout<<"\nEnter data->";
            cin>>n;
            SortedInsert(n);
        }
        cout<<"\nDo u wanna contd(y/n)->";
        cin>>choi;
    }while(choi=='y');
    return 0;
}
