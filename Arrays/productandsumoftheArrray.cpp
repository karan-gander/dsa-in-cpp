#include <iostream>
using namespace std;

int sumOfArray(int array[], int size)
{

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    return sum;
}

int productOfArray(int array[], int size)
{

    int product = 1;

    for (int i = 0; i < size; i++)
    {
        product*=array[i];

    }
    return product;
}
int main()
{

    int array[5] = {10, 20, 40, 1, 5};

    int result = sumOfArray(array, 5);
    int result1 = productOfArray(array, 5);
    cout << "The sum of the array is " << result;
    cout << "\n \n The product of the array is " << result1;
}
