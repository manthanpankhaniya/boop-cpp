#include<iostream>
using namespace std;
class vehicle
{
	public:
		string brand;
		string model;
		int year;
};
int main()
{
	vehicle car_obj1;
	car_obj1.brand= "Audi";
	car_obj1.model="Rs6";
	car_obj1.year=1996;
	vehicle car_obj2;
	car_obj2.brand="BMW";
	car_obj2.model="X4";
	car_obj2.year=1999;
	cout<<"CAR - 1";
	cout<<endl<<endl<<car_obj1.brand;
	cout<<endl<<car_obj1.model<<endl;
	cout<<car_obj1.year<<endl;
	cout<<endl<<endl<<"CAR - 2";
	cout<<endl<<endl<<car_obj2.brand;
	cout<<endl<<car_obj2.model<<endl;
	cout<<car_obj2.year;
	return 0;
}
