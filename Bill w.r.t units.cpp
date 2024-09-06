#include<iostream>
using namespace std;
int main()
{
	int unit_cons,price,total,FPA;
	cout<<"Enter the unit consumed:"<<endl;
	cin>>unit_cons;
	if(unit_cons<=200){
		price=10;
		FPA=240;
		total=price*unit_cons+FPA;
	}
	if(unit_cons>=200&& unit_cons<=400){
		price=24;
		FPA=920;
		total=price*unit_cons+FPA;
	}
	if(unit_cons>=400){
		price=45;
		FPA=1900;
		total=price*unit_cons+FPA;
	}
	cout<<"Total price="<<total;
	return 0;
}
