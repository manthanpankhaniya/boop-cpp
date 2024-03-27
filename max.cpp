#include<iostream>
using namespace std;
void max()
{
	int a,b;
	cout<<"Enter two Numbers";
	cin>>a>>b;
	if(a>b)
	  cout<<endl<<a<<"is greater than"<<b;
	else
	  cout<<endl<<b<<"is greater than"<<a;
}
int main()
{
	max();
	return 0;
}
