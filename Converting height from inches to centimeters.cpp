#include<iostream>
using namespace std;
int main()
{
	float height_inches,height_centimeters;
	cout<<"Enter your height in inches:"<<endl;
	cin>>height_inches;
	height_centimeters= height_inches*2.54;
	cout<<"Your height in centimeters is: "<<height_centimeters;
	return 0;
}
