//insertion in linklist and deletion in linklist and display
#include <stdio.h>
#include <stdlib.h>
struct node{int info;
struct node *next;}*top=NULL,*ptr,*cur;
//top=NULL;
void reverse()
{
    struct node *ptr1,*var=NULL;
    ptr=top;
    while(ptr!=NULL)
    {
        ptr1=var;
        var=ptr;
        ptr=ptr->next;
        var->next=ptr1;
    }
    top=var;

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
void insert_end(int n)
{
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->info=n;
    ptr->next=NULL;
    if(top==NULL)
    {
        top=ptr;
        cur=ptr;
    }
    else
    {
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=ptr;
        cur=ptr;
    }
}
void insert_mid(int n,int pos)
{
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->info=n;
    ptr->next=NULL;
    {
        int i=1;
        cur=top;
        while(pos!=i+1)
        {
            cur=cur->next;
            i++;
        }
        if(pos==i+1)
        {
        ptr->next=cur->next;
        cur->next=ptr;
        }
    }
}
void display()
{
    ptr=top;
    printf("\nElements are->\n");
    while(ptr!=NULL)
        {printf("%d\t",ptr->info);
          ptr=ptr->next;}
}
void delete_begin()
{if(top==NULL)
printf("\nLIST is Empty");
else
  {
      ptr=top;
    top=top->next;
      free(ptr);
  }
}
void delete_end()
{
    cur=top;
    while(cur->next->next!=NULL)
        cur=cur->next;
    ptr=cur->next->next;
    cur->next=NULL;
        free(ptr);
}
void delete_mid(int pos)
{int i=1;
    cur=top;
    while(pos!=i+1)
    {
        cur=cur->next;
        i++;
    }
    if(pos==i+1)
    {
        ptr=cur->next;
        cur->next=ptr->next;
        free(ptr);
    }
}

int main()
{
    int n,pos,ch,num;
    char choi;
    do{printf("\n1.Insertion at beginning\n2.Insertion at middle\n3.Insertion at end\n4.Delete from beginning\n5.Delete from end\n6.Delete from middle\n7.Search and count occurence of number\n8.Reverse list\n9.Display\n=>");
    scanf("%d",&ch);
    if(ch==1)
        {
            printf("\nEnter the element->");
            scanf("%d",&n);
            insert_begin(n);
        }
        else if(ch==2)
        {
            printf("\nEnter the element & position->");
            scanf("%d",&n);
            scanf("%d",&pos);
            insert_mid(n,pos);
        }
        else if(ch==3)
        {
            printf("\nEnter the element->");
            scanf("%d",&n);
            insert_end(n);
        }
        else if(ch==4)
            delete_begin();
        else if(ch==5)
            delete_end();
        else if(ch==6)
        {
          printf("Enter position to delete=>");
          scanf("%d",&pos);
            delete_mid(pos);
        }
        else if(ch==7)
    {
        printf("\nEnter the element to search and count occurence->");
        scanf("%d",&num);
        search_count(num);
    }
    else if(ch==8)
    {
        reverse();
    }
        else if(ch==9)
            display();
        printf("\nDo u wanna contd(y/n)->");
        scanf(" %c",&choi);
    }while(choi=='y');
}
