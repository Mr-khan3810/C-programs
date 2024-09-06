#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
	int radius,ch,area,circumference;
	cout<<"Enter the choice:"<<endl;
	cin>>ch;
	cout<<"Enter the radius:"<<endl;
	cin>>radius;
	if(ch==1)
	{
		area=PI*radius*radius;
		cout<<"The area of circle is :"<<area;	
	}
	else if(ch==2)
	{
		circumference=2*PI*radius;
		cout<<"The circumference of circle is :"<<circumference;
	}
	else
	cout<<"Error";
	return 0;
}
