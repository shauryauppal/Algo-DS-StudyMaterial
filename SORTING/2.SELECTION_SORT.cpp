#include <iostream>
using namespace std;
void selection_sort(int a[],int n)
{
    int small,i,j,k;
    for(i=0;i<n-1;++i)
    {
        small=a[i];
        for(j=i+1;j<n;++j)
        {
            if(small>a[j])
            {
                small=a[j];
                k=j;//to get the position of smallest element
            }
        }
        //cout<<small<<'\t'<<k<<'\n';
        a[k]=a[i];//swapping values
        a[i]=small;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t,a[1000];
    //cin>>t;//test case
    //for(int i=0;i<t;i++)
    {
    cin>>n;//size of array
    for(int j=0;j<n;++j)
        cin>>a[j];
    selection_sort(a,n);
    /*print the new sorted array*/
    for(int j=0;j<n;++j)
        cout<<a[j]<<" ";
    }
    return 0;
}

