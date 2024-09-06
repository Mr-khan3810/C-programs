#include<iostream>
using namespace std;
void swap(float x,float y){
double temp;
temp=x;
x=y;
y=temp;
cout << x << " " << y << endl;
}

int main(){
	swap(9.9,3.4);
	return 0;
}
