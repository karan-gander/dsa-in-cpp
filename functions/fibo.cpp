#include <iostream>
using namespace std;

void fib(int n)
{
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++)
    {

        cout << a << " ";

        c = a + b;
        a = b;
        b = c;
    }
    return;
    
}

int main()
{
    fib(4);
    
}