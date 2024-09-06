#include<iostream>
using namespace std;
int main()
{
	int test_score;
	cout<<"Enter your test score: "<<endl;
	cin>>test_score;
	if(test_score>=90)
	cout<<"Your grade is A ";
	else if(test_score>=80)
	cout<<"Your grade is B ";
	else if(test_score>=70)
	cout<<"Your grade is C ";
	else if(test_score>=60)
	cout<<"Your grade is D ";
	else
	cout<<"Your grade is F ";
	return 0;
}
