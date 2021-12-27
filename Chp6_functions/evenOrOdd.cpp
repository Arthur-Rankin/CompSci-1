#include <iostream>
using namespace std;

bool isEven(int);

int main()
{
    int val;
    cout << "enter an integer and I will tell you ";
    cout << "if it is even or odd: ";
    cin >> val;
    isEven(val) ? cout << val << " is even.\n" : cout << val << " is odd.\n";
    return 0;
}

bool isEven(int number)
{
    bool status;

    number % 2 == 0 ? status = true : status = false;
    return status;
}