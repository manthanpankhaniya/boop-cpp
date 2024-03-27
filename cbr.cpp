#include<iostream>
using namespace std;
void swap(int* x,int* y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
	cout<<endl<<"a="<<*x<<" b="<<*y;
}
int main()
{
	int a=10,b=20;
	cout<<"a="<<a<<" b="<<b;
	swap(&a,&b);
	return 0;
}
