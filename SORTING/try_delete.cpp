#include <bits/stdc++.h>
using namespace std;
//Quicksort method used to sort the arrays given X[] and Y[]
int partition(int arr[],int start,int end)
{
    int pivot=arr[end];
    int pIndex=start,i;
    for(i=start;i<=end-1;i++)
    {
        if(arr[i]<=pivot)
        {
            swap(arr[i],arr[pIndex]);
            pIndex++;
        }
    }
    swap(arr[pIndex],arr[end]);
    return pIndex;
}

void quicksort(int arr[],int start,int end)
{
    if(start<end)
    {
        int pIndex=partition(arr,start,end);
        quicksort(arr,start,pIndex-1);
        quicksort(arr,pIndex+1,end);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;//size of array
    int X[n],Y[n];
    //Taking input of X[] and Y[]
    for(int i=0;i<n;i++)
    {
        cin>>X[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>Y[i];
    }
    //X[] and Y[] are sort by quicksort
    quicksort(X,0,n-1);
    quicksort(Y,0,n-1);

    /*for(int i=0;i<n;i++)
    {
        cout<<X[i]<<'\t'<<Y[i]<<'\n';
    }*/
    //cout<<"\n**************************************************************\n";
      int i=0,j=0,count=0,flag;
     while(i<n)
     {
         /*if(X[0]<Y[0])
            {
                cout<<-1;
            exit(0);
            }*/

          int ct=0;
         if(X[i]>Y[i])
         {

             X[i]=X[i]-1;
            // flag=0;
            ct++;
             for(j=i+1; j<=n-1;j++)
             {
                 if(X[j]<Y[j])
                 {
                     X[j]+=1;
                     ct++;
              //     flag=1;
                     ++count;
                     break;
                 }
             }
             if(ct%2!=0)
             {cout<<-1;
             exit(0);}
             /*if(flag==0)
             {
                 cout<<-1;
                 exit(0);
             }*/
         }
           if(X[i]<=Y[i])
            i++;
     }
     cout<<count<<'\n';
      /*for(int i=0;i<n;i++)
    {
        cout<<X[i]<<'\t'<<Y[i]<<'\n';
    }*/

    //cout<<count;
    return 0;
}
