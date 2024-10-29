#include <iostream>
#include <climits>
using namespace std;

void swapMinMax(int array[], int size)
{

    int smallest = __INT_MAX__;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {

        if (smallest < array[i])
        {
            smallest = i;
        }

        if (largest < array[i])
        {
            largest = i;
        }
    }

    swap(array[smallest], array[largest]);
}

int main()
{
    int size = 8;
    int array[size] = {10, 2, 3, 78, 4, 0, 54, 1};

    swapMinMax(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}