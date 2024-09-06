#include<iostream>
using namespace std;
int main(){
	int salary,deduction;
	cout<<"Enter your salary: "<<endl;
	cin>>salary;
	if(salary>=20000)
	deduction=salary-(salary*7/100);
	else if(salary>=10000)
	deduction=salary-1000;
	else
	deduction=salary;
	cout<<"Your net salary is: "<<deduction;
	return 0;
	
}
