#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d,sum,average,product;
	cout<<"Enter first number: "<<endl;
	cin>>a;
	cout<<"Enter second number: "<<endl;
	cin>>b;
	cout<<"Enter third number: "<<endl;
	cin>>c;
	cout<<"Enter fourth number: "<<endl;
	cin>>d;
	sum=a+b+c+d;
	average=sum/4;
	product=a*b*c*d;
	cout<<"The sum of four numbers is :"<<sum<<endl;
	cout<<"The average of four numbers is :"<<average<<endl;
	cout<<"The product of four numbers is :"<<product<<endl;
	return 0;
}
