//very simple program that prints the numbers 1-10 with a loop and puts it into a file titled "numbers.txt"
#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    ofstream outputFile("numbers.txt");

    for(int i = 1; i <= 10; i++) 
    {
        outputFile << i << endl;
    }

    outputFile.close();
    return 0;
}