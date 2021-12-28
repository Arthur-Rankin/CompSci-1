#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    //string array
    cout << endl << "string array\n";
    const int AMOUNT_OF_PLANETS = 9;
    string planets[AMOUNT_OF_PLANETS] = {"mercury", "venus", "earth", "mars", "jupiter", "saturn", "uranus", "neptune", "pluto (a dwarf planet)"};
    for(int i = 0; i < AMOUNT_OF_PLANETS; i++)
    {
        cout << planets[i] << endl;
    };

    //char array
    cout << endl << "char array\n";
    const int VAL1 = 10;
    char letters[VAL1] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    for(int i = 0; i < VAL1; i++)
    {
        cout << letters[i] << endl;
    };

    //int array
    int num[5] = {1,2,3,4,5};

    return 0;
}