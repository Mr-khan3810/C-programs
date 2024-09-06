#include<iostream>
using namespace std;
int main()
{
	int nums[5];
	int value;
	for(int i=0;i<5;i++){
		cin>>nums[i];
		cout<<endl;
	}
	cout<<"Enter the value to find:"<<endl;
	cin>>value;
	for(int i=0;i<5;i++){
		if(nums[i]==value){
			cout<<i;
			break;
		}
		
	}
	return 0;
}
