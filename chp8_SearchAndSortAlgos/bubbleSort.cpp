#include <iostream>
using namespace std;

void bubbleSort(int array[], int size)
{
    int maxEle;
    int index;
    for(maxEle = size - 1; maxEle > 0; maxEle--)
    {
        for (index = 0; index < maxEle; index++)
        {
            if(array[index] > array[index + 1])
            {
                swap(array[index] > array[index + 1])
            }
        }
    }
}