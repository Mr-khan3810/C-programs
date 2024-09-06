#include <iostream>
using namespace std;
int main() {

  int  i, num, sum, r;
  cout << "Armstrong numbers between between 1 and 100000:"  << endl;
  for(i = 1; i <= 100000; i++) 
  {
    num = i;
    sum = 0;
    while(num > 0) 
	{
      r = num % 10;
      sum = sum + r*r*r;
      num /= 10;
    }
    if(sum == i) {
      cout << i << ", ";
    }
  }
  return 0;
}
