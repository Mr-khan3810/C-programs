#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
	float radius,area_of_cube,circumference_of_cube;
	cout<<"Enter the radius:"<<endl;
	cin>>radius;
	area_of_cube=4*PI*radius*radius;
	cout<<"The area of cube is "<<area_of_cube<<endl;
	circumference_of_cube=1.33*PI*radius*radius;
	cout<<"The circumference of cube is : "<<circumference_of_cube;
	return 0;
}
