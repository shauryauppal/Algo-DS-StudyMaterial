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
}*top=NULL,*cur =NULL,*ptr =NULL;
void insert()
{
    char choi;
    do
    {
        ptr= new firstnode;
        string std_name;
        cout<<"\nEnter name->";
        cin>>std_name;
        ptr->name=std_name;
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

        cout<<"\nDo u wanna add more names(y/n)->";
        cin>>choi;

    }while(choi=='y');
    ptr=top;
    while(ptr!=NULL)
    {
        int n,score;
        start=end=ptr->right;
        cout<<"\nHow many score you want to input for "<<ptr->name<<"=>";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cout<<"\nEnter score->";
            cin>>score;
            ptr1=new node;
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
        cout<<"\nData entry for name "<<ptr->name<<'\n';
        ptr1=ptr->right;
        while(ptr1!=NULL)
        {
            cout<<ptr1->data<<'\t';
            ptr1=ptr1->next;
        }

        ptr=ptr->down;
    }
}
int main()
{
    insert();
    display();
}
