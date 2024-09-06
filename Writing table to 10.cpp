#include<iostream>
using namespace std;
int main()
{
	int n,c;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	for(c=1;c<=10;c++)
	{
		cout<<n<<"*"<<c<<"="<<n*c<<"\n";
	}
	return 0;
}
