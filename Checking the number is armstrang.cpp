#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num,r,sum=0,checking;
	cout<<"Enter the number:"<<endl;
	cin>>num;
	checking=num;
	while(num!=0)
	{
		r=num%10;
		r=r*r*r;
		sum=sum+r;
		num=num/10;	
	}
	if(sum==checking)
	cout<<"The number is armstrang.";
	else
	cout<<"The number is not armstrang.";
	return 0;
}
