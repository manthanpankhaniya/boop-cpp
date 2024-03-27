#include<iostream>
#include<iostream>
using namespace std;
class circle
{
	public:
		double radius;
		double computer_area()
		{
			return (3.14*radius*radius);
		}
};
int main()
{
	circle obj;
	obj.radius=5.5;
	cout<<"Radius:"<<obj.radius<<endl;
	cout<<"Area:"<<obj.computer_area();
	return 0;
}
