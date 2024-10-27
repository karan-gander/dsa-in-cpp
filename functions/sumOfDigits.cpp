#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int reminder = num % 10;
        num = num / 10;
        sum += reminder;
    }
    // sumOfDigits(num);
    return sum;
}

int main()
{

    int number = sumOfDigits(45);
    cout << "sum of digits " << number;
}
