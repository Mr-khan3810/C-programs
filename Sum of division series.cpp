#include<iostream>
using namespace std;
int main()
{
	int n=1,c;
	double sum=0;
	for(c=2;c<=10;c+=2)
	{
		if(n<=9)
		{
			cout<<n<<"/"<<c<<"+";
			sum=sum + (double)n/c;
			n=n+2;
		}
	}
	cout<<"\b ="<<sum;
	return 0;
}
