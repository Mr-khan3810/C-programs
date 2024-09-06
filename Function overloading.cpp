#include<iostream>
using namespace std;
void sum(int x,int y){
	cout<<x+y;
}
void sum(int x,int y,int z){
	cout<<x+y+z;
}
int main()
{
	sum(4,5);
	cout<<endl;
	sum(1,2,3);
	return 0;
}
