/* This program determines if the value is a prime numbers*/

#include <iostream>
using namespace std;

int main()
{

  int x, y;
  bool isPrime = true;

do{
  cout << "Enter any number: "; 
  cin >> y;
  for(x = 2; x <=y/2 ; ++x)
  {
      if(y % x == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";
  return 0;
  }while(y != 0);
}
