#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int COL = 7; //global column variable

void displayArray(const int [][COL], int, string); //function prototype

int main()
{   
    const int HOURS_ROWS = 5, STAMPS_ROWS = 8, AUTOS_ROWS = 12, CATS_ROWS = 50; //constant row variables
    int hours[HOURS_ROWS][COL] = {};
    int stamps[STAMPS_ROWS][COL] = {};
    int autos[AUTOS_ROWS][COL] = {};
    int cats[CATS_ROWS][COL] = {};

    displayArray(hours, HOURS_ROWS, "hours");
    displayArray(stamps, STAMPS_ROWS, "stamps");
    displayArray(autos, AUTOS_ROWS, "autos");
    displayArray(cats, CATS_ROWS, "cats");
    return 0;
}

void displayArray(const int num[][COL], int rows, string name)
{
    cout << "2D array for " << name << endl;
    for (int x = 0; x < rows; x++)
    {
        for (int y = 0; y < COL; y++)
        {
            cout << setw(4) << num[x][y] << " ";
        }
        cout << endl;
    }
    cout << "\n\n";
}