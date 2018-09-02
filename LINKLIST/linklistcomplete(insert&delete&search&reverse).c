//1.insertion in linklist 2.deletion in linklist 3.display 4.search 5.reverse 6.create sorted link list 7.sort existing link list
#include <stdio.h>
#include <stdlib.h>
struct node{int info;
struct node *next;}*top=NULL,*ptr,*cur;
/*Pairwise swap elements of a given linked list by changing links
Given a singly linked list, write a function to swap elements pairwise.
 For example, if the linked list is 1->2->3->4->5->6->7 then the function should change it to 2->1->4->3->6->5->7,
 and if the linked list is 1->2->3->4->5->6 then the function should change it to 2->1->4->3->6->5
This problem has been discussed here. The solution provided there swaps data of nodes.
 If data contains many fields, there will be many swap operations.
 So changing links is a better idea in general.
  Following is a C implementation that changes links instead of swapping data.*/
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void pair_swap()
{
    cur=top;
    while(cur!=NULL && cur->next!=NULL)
    {
        swap(&cur->info,&cur->next->info);
        cur=cur->next->next;
    }
}
void delete_dulicate_sortedlinklist()
{
    //cur pointing to start of linklist
    cur=top;
    //empty link list
    if(cur==NULL)
        return ;//comeout of function
    while(cur->next!=NULL)
    {
        if(cur->info==cur->next->info)
        {
            ptr=cur->next->next;
            free(ptr);
            cur->next=ptr;
        }
        else cur=cur->next;
    }
}
void delete_duplicate()
{
    struct node *temp;
    cur=top;//pointing to start of linklist
    /* Pick elements one by one */
    while(cur->next!=NULL && cur!=NULL)
    {
        //ptr is equated to cur
        ptr=cur;
        while(ptr->next!=NULL)
        {
            //if duplicate elemnt found then delete it
            if(cur->info==ptr->next->info)
            {//delete of element
                temp=ptr->next->next;
                free(ptr->next);
                ptr->next=temp;
            }
            else//move to next element
            ptr=ptr->next;
        }
        cur=cur->next;
    }
}
void sort_existing()
{
    struct node *ptr1,*ptr2;
    ptr1=top;
    ptr2=top;
    while(ptr1!=NULL)
    {ptr2=ptr1;
    while(ptr2!=NULL)
    {
        if(ptr1->info>ptr2->info)
        {
            int temp=ptr1->info;
            ptr1->info=ptr2->info;
            ptr2->info=temp;
        }
        ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
}

void create_sorted(int n)
{
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->info=n;
    ptr->next=NULL;
    if(top==NULL)
    {
        top=ptr;
    }
    if(ptr->info<top->info)
    {
        ptr->next=top;
        top=ptr;
    }
    cur=top;
    while(cur->next!=NULL)
    {
        if(ptr->info<cur->next->info)
        {
            if(ptr->info>cur->info)
            {
                ptr->next=cur->next;
                cur->next=ptr;
            }
        }
        cur=cur->next;
    }
}
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
    char choi,p;
    do{printf("\n1.Insertion at beginning\n2.Insertion at middle\n3.Insertion at end\n4.Delete from beginning\n5.Delete from end\n6.Delete from middle\n7.Delete duplicate elements\n8.Search and count occurence of number\n9.Reverse list\n10.Sort existing link list\n11.Display\n12.create a sorted linked list\n13.Delete duplicate elements in a sorted linklist\n14.Pairwise swap elements\n=>");
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
         delete_duplicate();
         display();
        }
        else if(ch==8)
    {
        printf("\nEnter the element to search and count occurence->");
        scanf("%d",&num);
        search_count(num);
    }
    else if(ch==9)
    {
        reverse();
        display();
    }
    else if(ch==10)
    {
        sort_existing();
        display();
    }
        else if(ch==11)
            display();
            else if(ch==12)
            {
                do{
                printf("\nEnter elments->");
                scanf("%d",&n);
                create_sorted(n);
                printf("\nAdd more elements(y/n)->");
                scanf(" %c",&p);}while(p=='y');
            }
            else if(ch==13)
            {
                delete_dulicate_sortedlinklist();
                 display();
            }
            else if(ch==14)
            {
                pair_swap();
                display();
            }
        printf("\nDo u wanna contd(y/n)->");
        scanf(" %c",&choi);
    }while(choi=='y');
return 0;
}
