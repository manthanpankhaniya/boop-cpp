#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int b=9;
	int bitwise_and=a&b;
	int bitwise_or=a|b;
	int bitwise_xor=a^b;
	int bitwise_not=~a;
	int left_shift=a<<2;
	int right_shift=a>>1;
	cout<<endl<<"AND:"<<bitwise_and;
	cout<<endl<<"OR:"<<bitwise_or;
	cout<<endl<<"XOR:"<<bitwise_xor;
	cout<<endl<<"NOT:"<<bitwise_not;
	cout<<endl<<"LEFT_SHIFT:"<<left_shift;
	cout<<endl<<"RIGHT_SHIFT:"<<right_shift;
	return 0;
}
