#include<iostream>
using namespace std;
int main()
{
//	int i,j;
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3-i;j++){
			cout<<" ";
		}
		for(int s=1;s<=i;s++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

