#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
   vector<int> vec;
   int n,e;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>e;
       vec.push_back(e);
   }
   int a,b;
   cin>>a>>b;//position you wanna swap
   iter_swap(vec.begin()+a-1,vec.begin()+b-1);//function used to swap vector elements
   for(vector <int>::iterator v=vec.begin();v!=vec.end();v++)
    cout<<*v<<" ";//printing of vector elements after swapping
}
