#include<iostream>
using namespace std;
int main()
{
	string br="britanyl",bo="brofen",pa="panadol",syr="brumax";
	int item,Britanyl,Brofen,Panadol,Brumax,total;
	string name;
	cout<<"Enter the medicine name:";
	cin>>name;
	cout<<"Enter the items:";
	cin>>item;
	if(name==br)
	{
	Britanyl=2;
	total=Britanyl*item;
	cout<<"Total="<<total;
	}
	else if(name==bo)
	{
	Brofen=5;
	total=Brofen*item;
	cout<<"Total="<<total;
	
	}
	else if(name==pa)
	{
		Panadol=3;
		total=Panadol*item;
		cout<<"Total="<<total;
	}
	else if(name==syr)
	{
		Brumax=65;
		total=Brumax*item;
		cout<<"Total= "<<total;
	}
	else
	cout<<"Invalid medicine name";
	return 0;
	
}
