#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,average;
	for(n=1;n<=10;n++)
	{
		cout<<n<<endl;
		sum=n+sum;
	}
	average=sum/10;
	cout<<"The average of number 1 to 10 is: "<<average;
	return 0;
}
