//list of list using one structure type node
#include <bits/stdc++.h>
using namespace std;
struct node
{
    string data;
    node *next;
    node *down;
}*top=NULL,*cur=NULL,*start=NULL,*end=NULL,*ptr=NULL,*ptr1=NULL;
void insert()
{

//choi for continue process
        char choi;
    do
    {
        //name input string n
        string n;
        cout<<"\nEnter name->";
        cin>>n;
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
        cout<<"\nDo u want to insert more names(y/n)=>";
        cin>>choi;
    }while(choi=='y');

    //ptr pointing top
    ptr=top;
    while(ptr!=NULL)
    {
        start=end=ptr->next;
        int n;
        string score;
        cout<<"\nEnter no. of score inputs for "<<ptr->data<<"=>";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cout<<"\nEnter score->";
            cin>>score;
            ptr1=new node;
            (ptr1->data)=score;
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
        ptr=ptr->down;
    }
}
void display()
{
    ptr=top;
    while(ptr!=NULL)
    {
        cout<<"\nName of student "<<ptr->data<<'\n';
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
    insert();
    display();
    return 0;
}
