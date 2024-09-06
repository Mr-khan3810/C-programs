#include<iostream>
using namespace std;
int main()
{

	for(int i=1;i<=5;i+=2)
	{
		for(int k=1;k<=5+i;k++)
			cout<<" ";
		for(int j=5;j>=i;j--)
		{
			cout<<" * ";
		}
		cout<<endl;
	}	
	return 0;
}
