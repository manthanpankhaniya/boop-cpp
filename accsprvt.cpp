#include<iostream>
using namespace std;
class A
{
	private:
		int x;
		int y;
	public:
		void get(int p,int q)
		{
			x=p;
			y=q;
		}
		void show()
		{
			cout<<"x="<<x<<" y="<<y;
		}
};
int main()
{
	A ob1;
	ob1.get(8,10);
	ob1.show();
	return 0;
}
