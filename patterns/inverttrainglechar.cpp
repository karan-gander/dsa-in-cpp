#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    char ch='A';
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j < n - i; j++)
        {
            cout<<ch;
            
        }
        cout<<"\n";
        ch++;

    }
}