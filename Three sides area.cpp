#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c;
	double s,area;
	cout<<"Enter side a:"<<endl;
	cin>>a;
	cout<<"Enter side b:"<<endl;
	cin>>b;
	cout<<"Enter side c:"<<endl;
	cin>>c;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"The area of triangle is: "<<area;
	return 0;
}
