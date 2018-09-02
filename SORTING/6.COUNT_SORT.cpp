#include <iostream>
using namespace std;
void count_sort(int A[],int n,int k)
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
            C[A[j]]=C[A[j]]+1;//counting process statement

        for(int j=1;j<=k;j++)
            C[j]=C[j-1]+C[j];//check no. of elements smaller than the occuring element

            for(int j=n;j>=1;j--)
            {
                B[C[A[j]]]=A[j];
                C[A[j]]-=1;
            }
   cout<<"\nSorted array output->\n";
   for(int i=1;i<=n;i++)
    cout<<B[i]<<'\t';

}
int main()
{
    int n;//size of array input A[]
    cout<<"\nEnter the size of array->";
    cin>>n;

    int A[n];//input data
    int max=0;
    cout<<"\nEnter the elements->";
    for(int i=1;i<=n;i++)
        {
            cin>>A[i];
            if(A[i]>max)
                max=A[i];
        }

    count_sort(A,n,max);
    return 0;
}
