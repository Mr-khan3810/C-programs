#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,choice;
	double A,B,C;
	cout<<"Enter choice:"<<endl;
	cin>>choice;
	if(choice==1){
		cout<<"Enter the value of b:";
		cin>>b;
		cout<<"Enter the value of c:";
		cin>>c;
		cout<<"Enter the value of A:";
		cin>>A;
		a=(b*b + c*c-2*b*c*cos(A));
		cout<<"a="<<a;		
	}
	else if(choice==3){
		cout<<"Enter the value of b:";
		cin>>b;
		cout<<"Enter the value of a:";
		cin>>a;
		cout<<"Enter the value of C:";
		cin>>C;
		c=(b*b + a*a -2*b*a*cos(C));
		cout<<"c="<<c;
	}
	else if(choice==2){
		cout<<"Enter the value of a:";
		cin>>a;
		cout<<"Enter the value of c:";
		cin>>c;
		cout<<"Enter the value of B:";
		cin>>B;
		b=a*a + c*c -2*a*c*cos(B);
		cout<<"b="<<b;
	}
	else
		cout<<"Invalid choice";
	return 0;
	
}
