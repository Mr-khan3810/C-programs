#include<iostream>
using namespace std;
struct studentType{
	string name;
	string father_name;
	int roll_no;
	double address;
};
int main(){
	studentType s1;
	cout<<"Enter the student name:"<<endl;
	cin>>s1.name;
	cout<<"Enter the father name:"<<endl;
	cin>>s1.father_name;
	cout<<"Enter the roll#:"<<endl;
	cin>>s1.roll_no;
	cout<<"Enter the address:"<<endl;
	cin>>s1.address;
	cout<<s1.address;
	return 0;
}
