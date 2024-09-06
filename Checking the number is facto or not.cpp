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
	/*	for(c=r;c>=r;c--){
			fact=fact*c;
		}
		r=fact(r);*/
		r=tgamma(r+1);
		sum=sum+r;
		num=num/10;	
	}
	if(sum==checking)
	cout<<"The number is facto.";
	else
	cout<<"The number is not facto.";
	return 0;
}
