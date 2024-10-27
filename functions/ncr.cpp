#include <iostream>
using namespace std;

int fact(int num)
{

    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int ncr(int n, int r)
{
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_n_r = fact(n - r);

    return fact_n / (fact_r * fact_n_r);
}

int main()
{
    cout << "NcR = " << ncr(8, 2);
}