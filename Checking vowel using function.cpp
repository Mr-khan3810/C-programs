#include<iostream>
using namespace std;
bool isvowel(char ch){
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
		return true;
	else
		return false;
}
int main(){
	char c;
	cin>>c;
	if(isvowel(c))
	cout<<c<<" is vowel";
	else
	cout<<c<<" is not vowel";
	return 0;
}
