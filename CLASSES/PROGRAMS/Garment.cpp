#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
class GARMENT
{
	 char Gcode[30];
	 char Gtype[30];
	 int Gsize;
	 char Gfabric[30];
	 int Gprice;
	 void assign()
	 {
		  if(strcmp(Gfabric,"cotton")==0)
		  {
				if(strcmp(Gtype,"trouser")==0)
					 Gprice=1300;
				else Gprice=1100;
		  }
		  else
		  {
				if(strcmp(Gtype,"trouser")==0)
					 Gprice=1300-1300*(10/100);
				else Gprice=1100-1100*.1;
		  }
	 }
public:
	 GARMENT()
	 {
		  strcpy(Gcode,"not allotted");
		  strcpy(Gtype,"not allotted");
		  strcpy(Gfabric,"not allotted");
		  Gsize=0;
		  Gprice=0;
	 }
	 void get()
	 {
		  gets(Gcode);gets(Gtype);cin>>Gsize;cin>>(Gfabric);
		  assign();
	 }
	 void put()
	 {
		  cout<<Gcode<<'\n'<<Gtype<<'\n'<<Gsize<<'\n'<<Gfabric<<'\n'<<Gprice<<'\n';
	 }
};
int main()
{
	 GARMENT g;
	 cout<<"\nEnter details->\n";
	 g.get();
	 cout<<"\nDetails are->\n";
	 g.put();
	 return 0;
}
