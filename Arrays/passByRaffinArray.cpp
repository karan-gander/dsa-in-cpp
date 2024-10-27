#include <iostream>
using namespace std;

void changeArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int main()
{
    int array[4] = {1, 2, 3, 4};
    changeArray(array, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << array[i] << "\n";
    }
}