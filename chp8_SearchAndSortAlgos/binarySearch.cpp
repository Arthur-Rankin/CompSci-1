#include <iostream>
using namespace std;

int binarySearch(const int [], int, int);
const int SIZE = 20;

int main()
{
    int idNums[SIZE] = {101, 142, 147, 189, 199, 207, 222,
                        234, 289, 312, 356, 399, 403, 414,
                        417, 475, 512, 539, 567, 600};
    int results; //to hold the search results
    int empID;  //to old an employee id

    cout << "Enter the employee ID you wish to search for: ";
    cin >> empID;

    results = binarySearch(idNums, SIZE, empID);

    if(results == -1)
        cout << "That number does not exist in the array";
    else
    {
        cout << "That ID is found at element " << results;
        cout << " in the array.\n";
    }

    return 0;
}

int binarySearch(const int arr[], int size, int value)
{
    int first = 0,
        last = size - 1,
        middle,
        position = -1;
    bool found = false;

    while(!found && first <= last)
    {
        middle = (first + last) / 2;
        if(arr[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (arr[middle] > value)
            last = middle - 1;
        else 
            first = middle + 1;
    }
    return position;
}