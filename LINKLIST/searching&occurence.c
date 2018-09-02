/*Write a program to insert following elements into Single Link List (LL1). Further display the
contents of SLL and count of unique elements (i.e. count of element 23 is 1 whereas it is 3 for
element 8).
Elements of LL1: 23, 12, 8, 78, 5, 45, 8, 15, 18, 20, 2, 19, 9, 8, 25, 17*/
#include <stdio.h>
#include <stdlib.h>
struct node{int info;
struct node *next;}*top=NULL,*cur,*ptr;
void insert_begin(int n)
{
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->info=n;
    ptr->next=NULL;
    if(top==NULL)//list is empty
    {
        top=ptr;
        cur=ptr;
    }
    else//list is empty
    {
        ptr->next=top;
        top=ptr;
    }
}
void search_count(int num)
{
    int ct=0;
    ptr=top;
    while(ptr!=NULL)
    {
        if(ptr->info==num)
            ct++;
        ptr=ptr->next;
    }
    printf("The number-%d occur %d times",num,ct);
}
void display()
{
    ptr=top;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->info);
        ptr=ptr->next;
    }
}
int main()
{
   int ch,num,n;
   char choi;
   do{printf("\n1.Insert\n2.Search number and count occurence\n3.Display\n=>");
   scanf("%d",&ch);
   if(ch==1)
    {
        printf("\nEnter the element to insert->");
        scanf("%d",&n);
        insert_begin(n);
    }
    else if(ch==2)
    {
        printf("\nEnter the element to search and count occurence->");
        scanf("%d",&num);
        search_count(num);
    }
    else if(ch==3)
        display();
    printf("\n\nDo u wanna contd(y/n)->");
    scanf(" %c",&choi);
   }while(choi=='y');
   return 0;
}
