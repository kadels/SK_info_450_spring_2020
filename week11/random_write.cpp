#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n=1000;
    ofstream outputfile;
    if (!outputfile) { 
        return 1;
    }
    outputfile.open("randoms.txt");
    outputfile<<"This will generates a list of 1,000 random integers."<<endl;
    for(int i=1;i<=n;i++)
    {
        outputfile<<1+(rand()%999)<<endl;
    }
    outputfile.close();
   return 0;
}