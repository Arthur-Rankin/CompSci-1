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
    }
    else
    {
        cout << "\tTHE FILE DOES NOT EXIST\n";
        cout << "\tRun the outputLoop program to create the needed file";
    };
    
    return 0;
}