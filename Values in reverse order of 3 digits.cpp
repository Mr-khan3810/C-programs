#include<iostream>
using namespace std;
int main()
{
	int n,a,b;
	cout<<"Enter the 3 digit number:"<<endl;
	cin>>n;
	a=n/100;
	n=n%100;
	b=n/10;
	n=n%10;
	cout<<"The digits in reverse order:"<<n<<b<<a;
	return 0;
}
