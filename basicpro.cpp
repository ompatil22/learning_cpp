#include<iostream>
using namespace std;
class cal
{
	int a,b,c;
	public:
		void get()
		{
			cout<<"\n enter the two number ";
			cin>>a>>b;
		}
		void add()
		{
			c=a+b;
		}
		void put()
		{
			
			cout<<"\n a="<<a;
			cout<<"\n b="<<b;
			cout<<"\n total="<<c;
			
		}
		
};
int main()
{
	cal c1;
	//clrscr();
	c1.get();
	c1.add();
	c1.put();
//	getch();
return(0);
}
