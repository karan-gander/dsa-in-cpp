#include <iostream>
using namespace std;

bool isPrime(int num)
{

    if (num <= 0)
    {
        cout << "Please write a positive number";
    }
    bool isPrime = true;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }

        return isPrime;
    }
}

int main()
{

    cout << "is Prime" << " " << isPrime(5);
}