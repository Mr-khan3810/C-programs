#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"Code\tCharacter"<<endl;
	for(i=0;i<=254;i++)
		cout<<i<<"\t"<<char(i)<<endl;
	return 0;
}
