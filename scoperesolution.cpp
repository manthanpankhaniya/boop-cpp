#include<iostream>
using namespace std;
int a=7;
int main()
{
	int b=5;
	cout<<"the global variable is ="<<::a;
	cout<<"\nthe local variable is ="<<b;
	return 0;
}
