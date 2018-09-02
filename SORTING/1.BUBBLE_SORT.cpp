#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int a[],int n)
{
std::ios::sync_with_stdio(false);
      cin.tie(NULL);
    int temp,i,j;
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
         /*swapping of elements*/
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
     std::ios::sync_with_stdio(false);
      cin.tie(NULL);
    int s;
    cin>>s;//size of array input
    int a[s];
    for(int i=0;i<s;i++)
    cin>>a[i];//elements of array input
    bubble_sort(a,s);
    /*printing of new sorted array*/
    for(int i=0;i<s;i++)
        cout<<a[i]<<'\t';
}
