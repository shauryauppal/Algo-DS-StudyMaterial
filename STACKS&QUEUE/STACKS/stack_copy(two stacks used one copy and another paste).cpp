/*Write a function called copy_stack that copies the contents of one stack into another. The  function must have two arguments of type stack, one for the
 source stack and one for the  destination*/
 #include <stdio.h>
 #include <iostream>
 using namespace std;
 #define size 10
 void push (int a1[],int &top,int data)
 {
     if(top==size-1)
        cout<<"stack is full";
        else{top++;
        a1[top]=data;}

 }
int copy(int a1[],int a2[],int &top)
{int k=0;
if(top==-1)
    cout<<"stack is empty";
for(int i=0;i<=top;i++)
        a2[k++]=a1[i];
        return k;
}
void display(int a2[],int k,int &top)
{if(top==-1)
cout<<"stack is empty";
    for(int i=0;i<k;i++)
        cout<<a2[i]<<"\t";
}
int main()
{
    int a1[size],ch,k,a2[size],data,top=-1;
    char choi;
    do{cout<<"1.push\n2.copy\n3.display\n=>";
    cin>>ch;
    if(ch==1)
    {cout<<"\nEnter data for "<<size<<"values->\n";
        for(int i=0;i<size;i++)
        {
            cin>>data;
            push(a1,top,data);
        }
    }
        else if(ch==2)
        {
            k=copy(a1,a2,top);
        }
        else if (ch==3)
        {
            display(a2,k,top);
        }
        cout<<"\ndo u want to contd(y/n)";
        cin>>choi;
    }while(choi=='y');
return 0;
}
