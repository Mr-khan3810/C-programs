#include<iostream>
using namespace std;
int main()
{
	int nums[5];
	int temp;
	for(int i=0;i<5;i++){
		cin>>nums[i];
		cout<<endl;
	}
	for(int i=1;i<5;i++){
		for(int j=0;j<5-i;j++){
			if(nums[j]>nums[j+1]){
			
			temp=nums[j];
			nums[j]=nums[j+1];
			nums[j+1]=temp;}
		}
	}
	for(int i=0;i<5;i++){
		cout<<nums[i]<<" ";
	}
	return 0;
}
