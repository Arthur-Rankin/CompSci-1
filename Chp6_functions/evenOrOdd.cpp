#include <iostream>
using namespace std;

bool isEven(int);

int main()
{
    int val-i;
    cout << "enter an integer and I will tell you ";
    cout << "if it is even or odd: ";
    cin >> val-i;
    isEven(val-i) ? cout << val-i << " is even.\n" : cout << val-i << " is odd.\n";
    return 0;
}

bool isEven(int number)
{
    bool status;

    number % 2 == 0 ? status = true : status = false;
    return status;
}