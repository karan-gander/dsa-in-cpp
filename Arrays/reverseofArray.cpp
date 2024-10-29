#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int array[size] = {1, 2, 3, 4, 10};
    int start = 0, end = size - 1;

    cout << "Array in orignal form" << endl;

    for (int i = 0; i < size; i++)
    {

        cout << array[i] << " ";
    }

    while (start < end)
    {

        swap(array[start], array[end]);
        start++;
        end--;
    }

    cout << "\n Array in reverse form" << endl;

    for (int i = 0; i < size; i++)
    {

        cout << array[i] << " ";
    }
}