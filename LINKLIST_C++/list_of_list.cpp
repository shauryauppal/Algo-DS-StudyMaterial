#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
}*start=NULL,*end=NULL,*ptr1=NULL;

struct firstnode
{
    string name;
    firstnode *down;
    node *right;
}*top=NULL,*cur=NULL,*ptr=NULL;

void insert()
{
    char choi;
    do
    {
        string name_std;
        cout<<"\nEnter name->";
        cin>>name_std;
        ptr=new firstnode;
        ptr->name=name_std;
        ptr->down=NULL;
        ptr->right=NULL;

        if(top==NULL)
        {
            top=cur=ptr;
        }
        else
        {
            cur->down=ptr;
            cur=ptr;
        }
        cout<<"\nDo u want to add more names(y/n)->";
        cin>>choi;
    }while(choi=='y');

    ptr=top;
    while(ptr!=NULL)
    {
        int n,score;
        start=end=ptr->right;
        cout<<"\nHow many score elements u want to insert for "<<ptr->name<<"=>";
        cin>>n;
      for(int i=0;i<n;i++)
    {
        ptr1=new node;
        cout<<"\nEnter score->";
        cin>>score;
        ptr1->data=score;
        ptr1->next=NULL;
        if(start==NULL)
        {
            ptr->right=ptr1;
            start=end=ptr1;
        }
        else
        {
            end->next=ptr1;
            end=ptr1;
        }
    }
        ptr=ptr->down;
    }
}
void display()
{
    ptr=top;
    while(ptr!=NULL)
    {
        cout<<"For name->"<<ptr->name<<" score=>";
        ptr1=ptr->right;
        while(ptr1!=NULL)
        {
            cout<<ptr1->data<<'\t';
            ptr1=ptr1->next;
        }
        cout<<'\n';
        ptr=ptr->down;
    }
}
int main()
{
    insert();
    display();
    return 0;
}
