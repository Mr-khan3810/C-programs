#include<iostream>
using namespace std;
int main()
{
	float temp;
	cout<<"Enter a temperature:";
	cin>>temp;
	if(temp>=35)
	cout<<" Hot day.";
	else if(temp>=25)
	cout<<" Pleasant day.";
	else
	cout<< "Cool day.";
	return 0;
}
