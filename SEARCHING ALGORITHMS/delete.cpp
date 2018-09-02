#include <bits/stdc++.h>
using namespace std;
void countsort(int A[],int n,int k,int exp)
{

    //n is size of array
    //A[] is input array
    //k is range of input array
    int C[k];//temporary array
    int B[n];//output array
    //counting of elements in C[]

    for(int i=0;i<=k;i++)
        C[i]=0;//All elements set to 0

           for(int j=1;j<=n;j++)
            C[(A[j]/exp)%10]=C[A[j]]+1;//counting process statement

        for(int j=1;j<=k;j++)
            C[j]=C[j-1]+C[j];//check no. of elements smaller than the occuring element

    for(int j=n;j>=1;j--)
            {
                B[(C[A[j]]/exp)%10]=A[j];
                C[(A[j]/exp)%10]-=1;
            }
 cout<<"\nSorted array output->\n";
   for(int i=1;i<=n;i++)
    cout<<B[i]<<'\t';
}
int main()
{
    int n;
    cin>>n;
    int arr[n],max=0;

    for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
                    if(max<arr[i])
                max=arr[i];
        }

    // Do counting sort for every digit. Note that instead
    // of passing digit number, exp is passed. exp is 10^i
    // where i is current digit number
    for (int exp = 1; max/exp > 0; exp *= 10)
        countsort(arr, n,max, exp);
    return 0;
}
