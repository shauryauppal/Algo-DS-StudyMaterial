#include <iostream>
#include <vector>  //used for vector
#include <algorithm>  //used for sort
using namespace std;
int main()
{    int n,e;
    vector<int> vec;
    cout<<"Enter the number of elements you want to push\n";
    cin>>n;//no. of elements
    cout<<"Enter the elements u wanna push-:\n";
    for(int i=0;i<n;i++)
    {
        cin>>e;//get element u want to push
        vec.push_back(e);//command to push elements
    }
    vector<int>::iterator itr1=vec.begin();//iterator initialised to begin
    vector<int>::iterator itr2=vec.end();//iterator intialisd to end
    vector<int>::iterator v;
    for(v=itr1;v<itr2;v++)
        cout<<*v<<"\t\t";
        //sort(vec.begin(),vec.end());//method one
     sort(itr1,itr2);//method 2
     cout<<"\nNew sorted elements are:-\n";
     for(v=itr1;v<itr2;v++)
        cout<<*v<<"\t";//printing of vector elements
        return 0;

}
