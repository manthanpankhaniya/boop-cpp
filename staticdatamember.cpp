#include<iostream>
#include<string.h>
using namespace std;
class car
{
	private:
		int car_id;
		char car_name[20];
		int marks;
	public:
		static int static_member;
		car()
		{
			static_member++;
		}
		void inp()
		{
			cout<<endl<<endl<<"Enter the id of car:"<<endl;
			cin>>car_id;
			cout<<"Enter the name of car:"<<endl;
			cin>>car_name;
			cout<<"Enter marks btw (1-10):"<<endl;
			cin>>marks;
		}
		void disp()
		{
			cout<<endl<<"ID of the car:"<<car_id;
			cout<<endl<<"Name of the car:"<<car_name;
			cout<<endl<<"Marks given:"<<marks;
		}
};
int car::static_member=0;
int main()
{
	car c1;
	c1.inp();
	c1.disp();
	
	car c2;
	c2.inp();
	c2.disp();
	cout<<"Number of the objects entered in the class:"<<car::static_member<<endl;
	return 0;
}
