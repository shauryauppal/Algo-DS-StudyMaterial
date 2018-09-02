#include <iostream>
using namespace std;
void insertion_sort(int a[],int n)
{
    int temp,i,j;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        /*Move element, one ahead which are greater than temp*/
        for(j=i-1;j>=0 && a[j]>temp;--j)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,arr[1000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    insertion_sort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<'\t';
    return 0;

}
