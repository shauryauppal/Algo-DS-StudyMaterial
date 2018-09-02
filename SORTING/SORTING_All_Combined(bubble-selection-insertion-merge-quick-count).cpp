/*ALL MAJOR SORTING TECHNIQUES ARE INCLUDED HERE*/
//1.BUBBLE SORT
//2.SELECTION SORT
//3.INSERTION SORT
//4.MERGE SORT
//5.QUICK SORT
//6.COUNT SORT
#include <bits/stdc++.h>
using namespace std;
int count_sort(int A[],int n)
{
    //calculating max for size of array of C[] counter array
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
            max=A[i];
    }

    int B[n];//output array
    int C[max];//counting array temporary storage done here
    for(int i=0;i<=max;i++)
        C[i]=0;//initially put to zero

    for(int j=0;j<n;j++)
    {
        C[A[j]]=C[A[j]]+1;//counting occurrence
    }
    for(int j=1;j<=max;j++)
    {
        C[j]=C[j]+C[j-1];//position
    }
    for(int j=n-1;j>=0;j--)
    {
        B[C[A[j]]-1]=A[j];//insertion of elements in sorted way
        C[A[j]]-=1;
    }
    //sorted array print
    for(int i=0;i<n;i++)
        cout<<B[i]<<'\t';
}
//QUICK SORT
int  partition(int arr[],int start,int end)
{
    int pIndex=start,i;
    int pivot=arr[end];
    for(i=start;i<=end-1;i++)
    {
        if(arr[i]<=pivot)
        {
            swap(arr[i],arr[pIndex]);
            pIndex++;
        }
    }
    swap(arr[end],arr[pIndex]);
    return pIndex;
}
void quick_sort(int arr[],int start,int end)
{
    if(start<end)
    {
        int pIndex=partition(arr,start,end);

        quick_sort(arr,start,pIndex-1);
        quick_sort(arr,pIndex+1,end);
    }

}

//MERGE SORT
void merge(int arr[],int start,int mid ,int end)
{
    int i,j,k;
    //size of temp arrays 1st half and 2nd half
    int n1=mid-start+1,n2=end-mid;
    int L[n1],R[n2];//temp arrays

    for(i=0;i<n1;i++)
        L[i]=arr[i+start];

    for(j=0;j<n2;j++)
        R[j]=arr[j+mid+1];

    for(i=0,j=0,k=start;i<n1 && j<n2;)
    {
        if(L[i]<R[j])
            arr[k++]=L[i++];
        else if(L[i]>R[j])
            arr[k++]=R[j++];
        else if(L[i]==R[j])
           {
            arr[k++]=L[i++];
             arr[k++]=R[j++];
             }
    }
    while(i<n1)
        arr[k++]=L[i++];
    while(j<n2)
        arr[k++]=R[j++];

}
void merge_sort(int arr[],int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        merge_sort(arr,start,mid);
        merge_sort(arr,mid+1,end);

        merge(arr,start,mid,end);
    }
}
void insertion_sort(int arr[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        for(j=i-1;arr[j]>temp && j>=0;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }
     /*sorted array printing*/
    for(int i=0;i<n;i++)
        cout<<arr[i]<<'\t';
}
void selection_sort(int arr[],int n)
{
    int ct_comp=0,ct_swap=0;
    int small,i,j,k;
    for(i=0;i<n-1;i++)
    {
        small=arr[i];
        for(j=i+1;j<n;j++)
        {
            if(small>arr[j])
            {
                ct_comp++;
                small=arr[j];
                k=j;
            }
        }
        swap(arr[i],arr[k]);
        ct_swap++;
    }
    cout<<"\nNo. of comparison->"<<ct_comp<<"\tNo. of swaps->"<<ct_swap<<'\n';
    /*sorted array printing*/
    for(int t=0;t<n;t++)
        cout<<arr[t]<<'\t';
}
void bubble_sort(int arr[],int n)
{
    int ct_comp=0,ct_swap=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                ct_swap++;
                swap(arr[j],arr[j+1]);
            }
            ct_comp++;
        }
    }

    cout<<"\nNo. of comparison->"<<ct_comp<<"\tNo. of swaps->"<<ct_swap<<'\n';
    /*sorted array printing*/
    for(int i=0;i<n;i++)
        cout<<arr[i]<<'\t';
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int ch;
    char choi;
    do
    {
        int n;
    cout<<"\nEnter the Size of Array->";
    cin>>n;//size of array
    int arr[n];
    cout<<"\nEnter Array input->";
    for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<"\n1.BUBBLE SORT\n2.SELECTION SORT\n3.INSERTION SORT\n4.MERGE SORT\n5.QUICK SORT\n6.COUNT SORT";
        cin>>ch;
        if(ch==1)
            bubble_sort(arr,n);
        else if(ch==2)
            selection_sort(arr,n);
        else if(ch==3)
            insertion_sort(arr,n);
        else if (ch==4)
            {
                merge_sort(arr,0,n-1);
            //printing of sorted array
            for(int i=0;i<n;i++)
                cout<<arr[i]<<'\t';
            }
        else if(ch==5)
            {
                quick_sort(arr,0,n-1);
            //printing of sorted array
            for(int i=0;i<n;i++)
                cout<<arr[i]<<'\t';
                }
        else if(ch==6)
                {

                    count_sort(arr,n);

                }

        cout<<"\nDo u want to contd.(y/n)->";
        cin>>choi;
        //clear screen
        system("cls");
    }while(choi=='y');

    return 0;
}
