#include<iostream>
using namespace std;
int num=50;
int main()
{
	int num=100;
	cout<<"The value of local variable="<<num;
	cout<<endl<<"The value of global="<<::num;
	return 0;
}
