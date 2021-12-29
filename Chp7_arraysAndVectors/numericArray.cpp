#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int sum();
double average();
int highest();
int lowest();


int main()
{
    sum();
    average();
    highest();
    lowest();

    return 0;
}

int sum()
{
    const int NUM_UNITS = 24;
    int units[NUM_UNITS];

    int total = 0;
    for(int i : units)
        total += i;

    return total;
}

double average()
{
    const int NUM_UNITS = 24;
    int units[NUM_UNITS];

    int total = 0;
    double average;

    for(int i : units)
    {
        total += i;
    }
  
    average = total / NUM_UNITS;
    return average;
}

int highest()
{
    const int SIZE = 50;
    int numbers[SIZE];

    int count;
    int highest;

    highest = numbers[0];
    for(count = 0; count < SIZE; count++)
    {
        if (numbers[count] > highest)
        {
            highest = numbers[count];
        }
    }

    return highest;
}

int lowest()
{
    const int SIZE = 50;
    int numbers[SIZE];


    int count;
    int lowest;

    lowest = numbers[0];
    for(count = 0; count < SIZE; count++)
    {
        if(numbers[count] < lowest)
        {
            lowest = numbers[count];
        }
    }
    return lowest;
}