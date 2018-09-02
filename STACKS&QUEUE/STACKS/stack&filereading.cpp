/*Write a program that read numbers from a file and pushes them into stack until we read a negative no. At this time, we stop reading
and pop five items from the stack and print them. If there are fewer than five items in the stack, print the error message.
 After printing data resume reading data and placing them in the stack. When the end of file is detected, print a message
  and item remaining in the stack*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#define size 10
void push(int a[],int &top,int data)
{
 if(top==size-1)
        printf("\nStack is full");
 else{top++;
 a[top]=data;}
}
void pop(int a[],int &top)
{
    if(top==-1)
        cout<<"stack is empty";
    else{int data=a[top];
    top--;
    cout<<data<<"\t";}
}
void display(int a[],int &top)
{
    for(int i=0;i<top;i++)
        cout<<a[i]<<"\t";
}
int main()
{
    FILE *fp;
    fp=fopen("stack.txt","r");
    int a[100],data,ct,top=-1;
    do
    {
        fscanf(fp,"%d",&data);
        if(data>0)
        push(a,top,data);
    }while(data>=0);
    //after inserting we pop elements
    if(top>5)
        {cout<<"Deleted elements are->\n";
        for(int i=0;i<5;i++)
        pop(a,top);}
    else {cout<<"Elements less than five";}
push(a,top,data);
for(int i=0;i<3;i++)//not correct way we should check for end of file then scanf that number of elements
    {fscanf(fp,"%d",&data);
        //while(data=getw(fp)!=EOF) not working
        push(a,top,data);}
     cout<<"\n\nElements are->";
     display(a,top);
fclose(fp);
    return 0;
}
