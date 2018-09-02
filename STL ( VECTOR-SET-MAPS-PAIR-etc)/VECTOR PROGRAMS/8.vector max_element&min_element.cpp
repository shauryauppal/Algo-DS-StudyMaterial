#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[10]={21,99,21,30000,21,54,2345,999,54,90};
    vector < int > v(A,A+10);

    set <int> s(v.begin(),v.end());
    vector <int> v1(s.begin(),s.end());
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<' ';

    int pos;
    cout<<"\nElement position where you want to insert zero->";
    cin>>pos;
    v.insert(v.begin()+pos,0);

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<' ';

    int ele;
    cout<<"\nEnter element those index you want to find->";
    cin>>ele;
    pos=find(v.begin(),v.end(),ele)-v.begin();
    cout<<"\nPosition of element "<<ele<<" ->"<<pos<<'\n';

    //let's find the maximum & minimum element and postion in array
    int ele_Max,ele_Min,ele_Max_index,ele_Min_index;
    ele_Max_index=max_element(v.begin(),v.end())-v.begin();//this gives index of max ele
    ele_Min_index=min_element(v.begin(),v.end())-v.begin();//this gives index min ele

    ele_Max=*max_element(v.begin(),v.end());//gives value
    ele_Min=*min_element(v.begin(),v.end());//gives value

    cout<<"\nMax element->"<<ele_Max<<" is at position->"<<ele_Max_index<<'\n';
    cout<<"\nMin element->"<<ele_Min<<" is at position->"<<ele_Min_index<<'\n';



}
