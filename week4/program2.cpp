#include <iostream>
using namespace std;
int main()
{
  char name [30][15]; 
  int i;  
   for (int i=0 ; i<30 ; i++)
    {
      cout<<" Please enter student name:";
      cin>>name [i];
    }
   for (int i=0 ; i<30 ; i++)
    {
     cout<<"Students:";
     cout<<name[i]<<endl;
    }
 return 0;
}

