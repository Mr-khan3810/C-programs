#include<iostream>
#include<cmath>
#include"Myheaderfile.h"
using namespace std;
long factorial(int);
int main(){
	long nth;
	long i=1,j=1;
	long cal;
	long sum=0;
	cout<<"Enter the nth term:"<<endl;
	cin>>nth;
	for(int k=1;k<=nth;k++){
		cal=pow(i,j) / factorial(k);
		sum=sum+cal;
		j++;
		i++;
	}
	cout<<"The sum of series is "<<sum;
	return 0;

}
/*long factorial(int n)
{
	long fact=1;
	for(int i=1;i<=n;i++)
		fact=fact*i;

	return fact;	
}*/
