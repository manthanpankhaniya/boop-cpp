#include<iostream>
#include<string.h>
using namespace std;
struct student
{
	int rollno;
	string name;
	float marks;
};
int main()
{
	student stud1;
	stud1.rollno=107;
	stud1.marks=80;
	stud1.name=" manthan";
	cout<<"Student information";
	cout<<endl<<"Name:"<<stud1.name;
	cout<<endl<<"Roll number:"<<stud1.rollno;
	cout<<endl<<"Marks:"<<stud1.marks;
	return 0;
}

