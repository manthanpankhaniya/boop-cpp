#include<iostream>
using namespace std;
class classb;
class classa
{
	private:
		int numA;
		friend class classb;
	public:
		classa():numA(12) {}
};
class classb
{
	private:
		int numB;
	public:
		classb():numB(1){}
		int add()
		{
			classa objectA;
			return objectA.numA+numB;
		}
};
int main()
{
	classb objectB;
	cout<<"sum:"<<objectB.add();
	return 0;
}


