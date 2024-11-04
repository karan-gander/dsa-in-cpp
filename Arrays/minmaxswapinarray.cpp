#include <iostream>
#include <climits>
using namespace std;

void swapMinMax(int array[], int size)
{
    if (size < 2)
        return;

    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 0; i < size; i++)
    {

        if (array[i]<array[minIndex])
        {
            minIndex = i;
        }

        if (array[i]>array[maxIndex])
        {
            maxIndex = i;
        }
    }

    // cout<<"maxIndex"<<maxIndex;
    // cout<<"minIndex"<<minIndex;

    swap(array[minIndex], array[maxIndex]);

    // for (int i = 0; i < size; i++)
    // {
    //     cout << array[i] << " ";
    // }
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