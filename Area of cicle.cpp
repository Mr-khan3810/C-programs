#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
	float radius,aoc,circumference;
	cout<<"Enter the radius:"<<endl;
	cin>>radius;
	aoc=PI*radius*radius;
	cout<<"The area of circle is "<<aoc<<endl;
	circumference=2*PI*radius;
	cout<<"The circumferenece of the circle is :"<<circumference;
	return 0;
}
