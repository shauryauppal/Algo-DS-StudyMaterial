#include <stdio.h>
#include <iostream>
using namespace std;
int front=-1;
int rear=-1;
void insert(int Q[],int data,int &size)
{
    if(rear==size-1)
        cout<<"Queue is full";
    else if(front==-1)
    {
        front++;rear++;
        Q[rear++]=data;
    }
    else Q[rear++]=data;

}
void pop(int Q[])
{
    if(front==-1)
        cout<<"queue is empty";
    else if (front==rear)
    {
        cout<<"Element Deleted-> "<<Q[front];
        front=rear=-1;
    }
    else
    {
        cout<<"Element Deleted->"<<Q[front];
        front++;
    }
}
void display(int Q[])
{
    if(front==-1)
        cout<<"\nQueue is empty";
    else{
        for(int i=front;i<rear;i++)
            cout<<Q[i]<<"\n";
    }
}
int main()
{
    int Q[100],data,size,ch;
    char choi;
    cout<<"Enter size of queue=>";
    cin>>size;
    do
    {
        cout<<"1.Insert\n2.Delete\n3.Display\n=>";
        cin>>ch;
        if(ch==1)
        {cout<<"\nEnter element u wanna insert=>";
            cin>>data;
            insert(Q,data,size);
        }
        else if(ch==2)
            pop(Q);
        else if(ch==3)
            display(Q);
        cout<<"\nDo u want to contd(y/n)";
        cin>>choi;
    }while(choi=='y');
    return 0;
}
