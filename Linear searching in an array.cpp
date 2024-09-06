#include<iostream>
using namespace std;
int main()
{
	int nums[5];
	int value,index=-1;
	for(int i=0;i<5;i++){
		cin>>nums[i];
		cout<<endl;
	}
	cout<<"Enter the value to find:"<<endl;
	cin>>value;
	for(int i=0;i<5;i++){
		if(nums[i]==value){
			index=i;
			break;
		}
	}
	if(index==-1)
	cout<<"Value not found";
	else
	cout<<"Value found at index:"<<index;
	return 0;
}
