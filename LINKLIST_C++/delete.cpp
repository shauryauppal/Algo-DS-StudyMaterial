#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    string name;
    node *next_name;
    node *next_data;
}*top=NULL,*cur=NULL,*ptr=NULL;
void insert(int n,string nm)
{
    ptr=new node;
    ptr->data=n;
    ptr->name=nm;
    ptr->next_name=NULL;
    ptr->next_data=NULL;

    if(top==NULL)
    {
        top=cur=ptr;
    }
    else
    {
        cur->next_name=ptr;
        cur->next_data=ptr;
        cur=ptr;
    }
}
void display_name()
{
    ptr=top;
    while(ptr!=NULL)
    {
        cout<<"\nName->"<<ptr->name<<"\tAge->"<<ptr->data<<'\n';
        ptr=ptr->next_name;
    }
}
void display_age()
{
    ptr=top;
    while(ptr!=NULL)
    {
        cout<<"\nName->"<<ptr->name<<"\tAge->"<<ptr->data<<'\n';
         ptr=ptr->next_data;
    }
}
void sort_name()
{
    node *ptr1,*ptr2;
    ptr1=top;
    ptr2=top;
    while(ptr1!=NULL)
    {
        ptr2=top;
        while(ptr2->next_name!=NULL)
        {
            if(ptr2->name>ptr2->next_name->name)
            {
                swap(ptr2->name,ptr2->next_name->name);
                swap(ptr2->data,ptr2->next_name->data);
            }
            ptr2=ptr2->next_name;
        }
        ptr1=ptr1->next_name;
    }
}
void sort_age()
{
    node *ptr1,*ptr2;
    ptr1=top;
    ptr2=top;
    while(ptr1!=NULL)
    {
        ptr2=top;
        while(ptr2->next_data!=NULL)
        {
            if(ptr2->data>ptr2->next_data->data)
            {
                swap(ptr2->name,ptr2->next_name->name);
                swap(ptr2->data,ptr2->next_data->data);
            }
            ptr2=ptr2->next_data;
        }
        ptr1=ptr1->next_data;
    }
}
int main()
{
    int ch;
    char choi;
    string name;
    int age;
    do
    {
        cout<<"\n1.Insert\n2.Sort by name\n3.Sort by age\n4.Exit\n=>";
        cin>>ch;
        if(ch==1)
        {
            cout<<"\nEnter name and age->";
            cin>>name>>age;
            insert(age,name);
        }
        else if(ch==2)
        {
            sort_name();
            display_name();
        }
        else if(ch==3)
        {
            sort_age();
            display_age();
        }
        else exit(0);

        cout<<"\nDo u want to contd(y/n)->";
        cin>>choi;
    }while(choi=='y');
    return 0;
}
