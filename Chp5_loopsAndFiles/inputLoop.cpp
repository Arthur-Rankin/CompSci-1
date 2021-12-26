#include <iostream>
#include <fstream>
#include <iomanip>    
using namespace std;

int main() 
{
    ifstream inputFile("numbers.txt");
    int num;

    if(inputFile)
    {
        while(inputFile >> num)
        {
            cout << num << "," << setw(3);
        };
    };
    
    return 0;
}