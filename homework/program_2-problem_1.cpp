#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

int main()
{
    //initialzing variables for calculations
    double kilograms,
           kilometers,
           liters,
           converstion_results;
    char choice;//variable to store users choice in

    //Menu to receive user's choice
    cout << "\tCONVERSION MENU\n";
    cout << "Convert Kilmeters to Miles: Press M\n";
    cout << "Convert Kilograms to Pounds: Press P\n";
    cout << "Convert Liters to Quarts: Press Q\n";
    cin >> choice;

    //switch statements to check user's choice
    //set choice to lower case to make sure the program accepts both upper and lower case inputs
    switch (tolower(choice))
    {
    case 'p': //user chose pound conversion
        cout << "Enter the amount of Kilograms: ";
        cin >> kilograms;
        converstion_results = kilograms * 2.2046;
        cout << kilograms << " Kilograms equals " << fixed << setprecision(2) << converstion_results << " Pounds";
        break;
    case 'm': //user chose miles conversion
        cout << "Enter the amount of Kilometers: ";
        cin >> kilometers;
        converstion_results = kilometers * 0.621388;
        cout << kilometers << " Kilometers equals " << fixed << setprecision(2) << converstion_results << " Miles";
        break;
    case 'q': //user chose quarts conversion
        cout << "Enter the amount of Liters: ";
        cin >> liters;
        converstion_results = liters * 0.877193;
        cout << liters << " Liters equals "<< fixed << setprecision(2) << converstion_results << " Quarts";
        break;
    default:
        break;
    }
    
    return 0;
}