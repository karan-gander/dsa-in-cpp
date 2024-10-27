#include <iostream>
using namespace std;

int main()
{

    int n = 4;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {

            cout << "*";
        }

        for (int j = i; j < n - 1; j++)
        {
            cout << " ";
        }
        for (int j = i; j < n-1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {

            cout << "*";
        }

        cout << "\n";
    }
    

    for (int i = 0; i < n; i++)
    {
    //     for(int j=0;)

    //     cout<<"\n";
    }
}