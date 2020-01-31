// This program continually accepts positive values for the user and calculates the square of the value. 
#include <iostream>
#include <cmath>
using namespace std;


int main()
{

   int y;
   int square;
   
   while(y != 0){
    cout << "Enter the number: ";
    cin >> y; // taking input from the user// 
    square = y * y;

    cout<< " Square of " <<y<< " is " << square << endl;
   }
}   
