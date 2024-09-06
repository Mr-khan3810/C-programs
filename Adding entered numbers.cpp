#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num,r,sum=0;
	cout<<"Enter the number:"<<endl;
	cin>>num;
	while(num!=0)
	{
		r=num%10;
		sum=sum+r;
		num=num/10;	
	}
	cout<<"The sum is "<<sum;
	return 0;
}
