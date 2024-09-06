#include <iostream>
#include <cmath>
using namespace std;
long fact(int);
int main() {

  int  i, num,r;
  long sum;
  cout << "Facto numbers between between 1 and 100000:"  << endl;
  for(i = 1; i <= 100000; i++) 
  {
    num = i;
    sum = 0;
    while(num != 0) 
	{
      r = num % 10;
      sum = sum + fact(r);
      num /= 10;
    }

    // if sum is equal to i, then it is facto
    if(sum == i) {
      cout << i << ", ";
    }
  }

  return 0;
}
long fact(int n)
{   
   long f = 1;
   for(int i=1;i<=n;i++)
   f=f*i;
   return f;
}
