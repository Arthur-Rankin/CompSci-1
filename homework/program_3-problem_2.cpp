#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
    int start_val = 0, days;
    double daily_increase;
    string error_message = "I'm afraid that is too low. Please enter a higher number: ";
    
    int attempts = 0;
    do {
        if (attempts == 0)
            cout << "Please enter the starting number of Organisms: ";
        if (attempts > 0)
            cout << error_message;
        cin >> start_val; 
        attempts++;     
    } while(start_val < 2);

    attempts = 0;
    do {
        if (attempts == 0)
              cout << "Please enter the daily popultaion increase: ";
        if (attempts > 0)
            cout << error_message;
        cin >> daily_increase;
        attempts++;     
    } while(daily_increase < 0);
    
    attempts = 0;
    do {
        if (attempts == 0)
              cout << "Please enter the number of days they will mulitply: ";
        if (attempts > 0)
            cout << error_message;
        cin >> days;
        attempts++;     
    } while(days < 1);
    attempts = 0;

    double output = start_val; 
    for (int i = 0; i < days; i++)
    {
        output = output + (output * (daily_increase * 0.01));
        cout << "\tThe population size for day " << (i + 1) << " is " << output << endl;
    }


    return 0;
}