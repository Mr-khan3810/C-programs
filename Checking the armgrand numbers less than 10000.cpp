#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num=145,r,sum=0,check;
	while(num<=10000){
		num=check;
		while(num!=0)
		{
			r=num%10;
			r=tgamma(r+1);
			sum=sum+r;
			num=num/10;
		}
	//	if(sum==check)
			cout<<sum<<",";
		num+=check;
		num++;
	}
	return 0;
}
