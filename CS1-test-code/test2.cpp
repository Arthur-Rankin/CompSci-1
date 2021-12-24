#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    ifstream inputFile("Possible401k.txt");
    string text;

    inputFile >> text;
    cout << text << endl;

    
    inputFile.close();
    
    return 0;


}