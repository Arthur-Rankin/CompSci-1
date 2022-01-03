#include <iostream>
using namespace std;

int linearSearch(const int[], int, int);

int main()
{
    const int SIZE = 5;
    int tests[SIZE] = { 87, 75, 98, 100, 95 };
    int results;

    results = linearSearch(tests, SIZE, 100);

    if(results == -1)
    {
        cout << "You did not earn 100 points on any test\n";
        return 0;
    }
    cout << "You earned 100 points on test ";
    cout << (results + 1) << endl;
}

int linearSearch(const int arr[], int size, int value)
{
    int index = 0;
    int position = -1;
    bool found = false;

    while(!found && index < size)
    {
        if(arr[index] == value)
        {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}