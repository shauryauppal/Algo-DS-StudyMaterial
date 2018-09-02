#include <stdio.h>
#include <iostream>
using namespace std;
typedef struct{
int front;
int rear;
int Q[];}QUEUE;

void insert(QUEUE *ptr,int data,int &size)
{
    if(ptr->rear==size-1)
        cout<<"Queue is full";
    else if(ptr->front==-1)
    {
        ptr->front++;
        ptr->rear++;
        ptr->Q[ptr->rear++]=data;
    }
    else ptr->Q[ptr->rear++]=data;
}
void remove(QUEUE *ptr)
{
    if(ptr->front==-1)
    cout<<"Queue empty";
    else if(ptr->front==ptr->rear)
    {
        cout<<"Element deleted is->"<<ptr->Q[ptr->front];
        ptr->front=ptr->rear=-1;
    }
    else {cout<<"Element deleted is->"<<ptr->Q[ptr->front];
            ptr->front++;}
}
void display(QUEUE *ptr)
{
    if(ptr->front==-1)
        cout<<"stack is empty";
    else
    {for(int i=ptr->front;i<ptr->rear;i++)
        cout<<ptr->Q[i]<<"\n";
    }
}
int main()
{QUEUE q;
q.front=-1;
q.rear=-1;
    int size,ch,data;
    char choi;
    cout<<"Enter the size of Queue=>";
    cin>>size;
    do
        {cout<<"1.Insert\n2.Delete\n3.Display\n=>";
    cin>>ch;
    if(ch==1)
    {
        cout<<"Enter the element u wanna insert=>";
        cin>>data;
        insert(&q,data,size);
    }
    else if(ch==2)
    {
        remove(&q);
    }
    else if(ch==3)
    {
        display(&q);
    }
        cout<<"Do u wanna contd(y/n)";
        cin>>choi;
         }while(choi=='y');
         return 0;
}
