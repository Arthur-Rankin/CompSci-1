// 12-11-2021
#include <iostream> 
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    ofstream outputFile;

    int yearly_401, years_until_retirement; 
    long int retirement_total = 0;
    double yearly_yeild = 0.08;
    string file_name;

    cout << "first, lets enter the name of this file: ";
    cin >> file_name;
    outputFile.open(file_name + ".txt");
    
    cout << "How many years until you retire? ";
    cin >> years_until_retirement;

    cout << "How much do you plan to contirbute annually? ";
    cin >> yearly_401;

    for(int i = 0; i < years_until_retirement; i++) {
        long int num = (retirement_total + yearly_401) + (retirement_total * yearly_yeild);
        retirement_total = num;
    }
    cout << "\tAfter " << years_until_retirement << " years of contribution\n";
    cout << "\tat an average return of " << yearly_yeild * 100 << endl;
    cout << "\tyou will have a total retirement fund of " << retirement_total << "!";

    //creating the file
    outputFile << "your possible 401k total after: " << years_until_retirement << " years\n";
    outputFile << "of contributing " << yearly_401 << "\nis:\t";
    outputFile << retirement_total;

    outputFile.close();
    return 0;
}
