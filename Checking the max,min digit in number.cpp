#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num,r,min,max;
	cout<<"Enter the number:";
	cin>>num;
	min=num%10;
	max=num%10;
	while(num!=0){
		r=num%10;
		if(r<min)
		min=r;
		if(r>max)
		max=r;
		num=num/10;
	}
	cout<<"\nThe minimum digit is :"<<min<<endl;
	cout<<"\nThe maximum digit is :"<<max<<endl;
}
