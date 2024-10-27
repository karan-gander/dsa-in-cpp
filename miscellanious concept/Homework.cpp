#include <iostream>
using namespace std;

int main()
{

    int num = 4;
    // int reminder = 0;

    while (num != 1)
    {

        if (num % 2 == 0)
        {
            cout << false;
            break;
        }

        num = num / 2;

        cout << true;
    }
    // cout<<reminder;
}