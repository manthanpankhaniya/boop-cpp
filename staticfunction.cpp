#include<iostream>
using namespace std;
class member
{
	private:
		static int a;
		static int b;
		static int c;
	public:
		static void disp()
		{
			cout<<"The value of a is:"<<a<<endl;
			cout<<"The value of b is:"<<b<<endl;
			cout<<"The vslue of c is:"<<c<<endl;
		}
};
	int member::a=20;
	int member::b=30;
	int member::c=40;
int main()
{
	member mb;
	cout<<"Print the value through object"<<endl;
	mb.disp();
	cout<<"Print the value through object"<<endl;
	member disp();
}
