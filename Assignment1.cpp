#include <iostream>
using namespace std;

int main ()
{
    double pi, area, radius, circumference; 
    double calculateCircumference(double radius);
    pi= 3.14;
    cout << "Enter the radius of circle:";
    cin >> radius; 
    area = pi * (radius*radius);
    circumference = 2 * pi * radius;
    cout << "The area of the circle is" <<area<< "and the circumference is" << circumference << endl;
    return 0;
}