#include <iostream>
using namespace std;

int main()
{

    cout << "Enter a Positive Number" << endl;
    int n;
    bool isPrime = true;

    cin >> n;
    if (n < 0)
    {
        cout << "It is negetive number" << endl;
    }

    for (int i = 2; i*i<= n; i++)
    {

        if (n % i == 0)
        {
            // cout << "It is non-prime number" << endl;
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout<<"It is prime number";
    }
    else{
        cout<<"It is not prime";
    }

    return 0;
}