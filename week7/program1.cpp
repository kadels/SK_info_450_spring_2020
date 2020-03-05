#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string str = "Hello World"; 
	reverse(str.begin(), str.end()); 
    cout<<"\n"<<str; 
	string str1 = "The quick brown fox."; 
	reverse(str1.begin(), str1.end()); 
    cout<<"\n"<<str1; 
	string str2 = "Github is really helpful!"; 
	reverse(str2.begin(), str2.end()); 
    cout<<"\n"<<str2; 

    return 0;
}
