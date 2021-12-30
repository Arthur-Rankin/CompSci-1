#include <iostream>
#include <iomanip>
using namespace std;

const int COL = 7; //global column variable

void displayArray(const int [][COL], int); //function prototype

int main()
{   
    const int HOURS_ROWS = 5, STAMPS_ROWS = 8, AUTOS_ROWS = 12, CATS_ROWS = 50; //constant row variables
    int hours[HOURS_ROWS][COL] = {};
    int stamps[STAMPS_ROWS][COL] = {};
    int autos[AUTOS_ROWS][COL] = {};
    int cats[CATS_ROWS][COL] = {};

    displayArray(hours, HOURS_ROWS);
    displayArray(stamps, STAMPS_ROWS);
    displayArray(autos, AUTOS_ROWS);
    displayArray(cats, CATS_ROWS);
    return 0;
}

void displayArray(const int num[][COL], int rows)
{
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