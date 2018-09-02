#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;//vector declaration it create a empty vector
    int i,s=0;
    cout<<"vector size"<<vec.size()<<endl;//tellls size of vector vec.size
    for(i=0;i<5;i++)
        vec.push_back(i);//insertion of data
    cout<<"Extended size"<<vec.size()<<endl;//after insertion size of vector changes
    for(i-0;i<5;i++)
        cout<<vec[i]<<"\t ";//method 1=>TO PRINT VECTOR WITHOUT ITERARTOR
    vector <int>::iterator v=vec.begin();//iterator
    for(v=vec.begin();v!=vec.end();v++)
        cout<<*v<<"\t";//iterator method printing
        cout<<"\n\nMETHOD 1=>";
        for(int i=0;i<vec.size();i++)
            s=s+vec[i];
        cout<<"\nSum by method 1 is:-"<<s;
        s=0;
        cout<<"\n\nMETHOD 2=>";
        for(v=vec.begin();v!=vec.end();v++)//iterator method more preferred
            s=s+*v;//*v is used for iterator
            cout<<"\nSum by method 2 is:-"<<s<<endl;
    return 0;
}
