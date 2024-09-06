#include<iostream>
using namespace std;
int main()
{
	int salary,grade,bonus;
	cout<<"Enter your salary: "<<endl;
	cin>>salary;
	cout<<"Enter your grade: "<<endl;
	cin>>grade;
	if(grade>15){
		bonus=salary+(salary*50/100);
	}
	if(grade<=15){
		bonus= salary+(salary*25/100);
	}
	cout<<"Your salary with bonus is: "<<bonus;
	return 0;
}
