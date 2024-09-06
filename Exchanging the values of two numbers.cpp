#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the value of a:"<<endl;
	cin>>a;
	cout<<"Enter the value of b:"<<endl;
	cin>>b;
	cout<<"The values of a and b before execution: "<<a <<b<<endl;
	c=a;
	a=b;
	b=c;
	cout<<"The values of a and b after execution: "<<a <<b;
	return 0;
}
