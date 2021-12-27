#include <iostream>
using namespace std;

void first();
void second();

int main()
{
    first();
    second();
    return 0;
}

void first()
{
    cout << "hello form first\n";
}

void second()
{
    cout << "hello from second\n";
}