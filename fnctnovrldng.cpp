#include<iostream>
using namespace std;
int add(int a,int b)
{
	return(a+b);
}
int add(int x,int y,int z)
{
	return(x+y+z);
}
int main()
{
	cout<<"6+9="<<add(6,9);
	cout<<endl<<"9+6+3="<<add(9,6,3);
	return 0;
}
