#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    //Where I intialize of all my variables
    float loan_ammount, monthly_interest_rate, monthly_payments, amount_paid_back, interest_paid, annual_interest_rate, payment;
    float number_of_payments;
   
    //where i collect all of my needed inputs
    cout << "What is the annual interest rate? ";
    cin >> annual_interest_rate;

    cout << "What are the number of payments? ";
    cin >> number_of_payments;

    cout << "What is the total amount of the loan? ";
    cin >> loan_ammount;

    //Where i perform any needed calculations
    monthly_interest_rate = annual_interest_rate / 12 * 0.01;
    float numerator = monthly_interest_rate * pow((1 + monthly_interest_rate), number_of_payments);
    float denominator = pow((monthly_interest_rate + 1), number_of_payments) - 1;  
    monthly_payments = (numerator / denominator) * loan_ammount; 
    amount_paid_back =  monthly_payments * number_of_payments;
    interest_paid = amount_paid_back - loan_ammount;

    //where I ouput my finalized calculations
    cout << fixed << setprecision(2) <<  "Loan Amount:" << setw(16) << "$" << loan_ammount << endl;
    cout << setprecision(0) << "Monthly Interest Rate:" << setw(13) << (monthly_interest_rate * 100)  << "%\n";
    cout << "Number of Payments:" << setw(17) << number_of_payments << endl;
    cout << fixed << setprecision(2) << "Monthly Payment:" << setw(12) << "$" << setw(8) << monthly_payments << endl;
    cout << "Amount Paid Back:" << setw(11) << "$" << amount_paid_back << endl;
    cout << "Interest Paid:" << setw(14) << "$" << setw(8) << interest_paid << endl;
    
    return 0;
}




