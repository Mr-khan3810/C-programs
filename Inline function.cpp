#include<iostream>
using namespace std;
inline void max(int x,int y){
	if(x>y)
	cout<<x;
	else
	cout<<y;
}
int main()
{
	int x,y;
	cout<<"Enter the 1st number:"<<endl;
	cin>>x;
	cout<<"Enter the 2nd number:"<<endl;
	cin>>y;
	max(x,y);
	return 0;
}
