#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int dataValidation(string, string, int, int);

int main() 
{
    int start_val = 0, days, daily_increase;
    string too_low_message = "I'm afraid that is too low. Please enter a higher number: ";
    
    dataValidation(
        too_low_message, 
        "Please enter the starting number of Organisms: ",
        start_val, 
        2,
    );
    dataValidation(
        too_low_message, 
        "Please enter the daily popultaion increase: ",
        daily_increase, 
        0,
    );
    dataValidation(
        too_low_message, 
        "Please enter the number of days they will mulitply: ",
        days, 
        1);

    double output = start_val; 
    for (int i = 0; i < days; i++)
    {
        output = output + (output * (daily_increase * 0.01));
        cout << "\tThe population size for day " << (i + 1) << " is " << output << endl;
    }


    return 0;
}

int dataValidation(string too_low_message, string outgoing_message, int variable, int conditional_range)
{
    int attempts = 0;
    do {
        if (attempts == 0)
            cout << outgoing_message;
        if (attempts > 0)
            cout << too_low_message;
        cin >> variable; 
        attempts++;     
    } while(variable < conditional_range);

    return variable;
}