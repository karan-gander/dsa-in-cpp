#include <iostream>
using namespace std;

int main()
{

    int row, col;

    cout << "How many rows you wants ? \n";
    cin >> row;
    cout << "How many cols you wants ? \n";
    cin >> col;
    cout<<row;
    cout<<"\n";
    for (int i = 1;i<= row;i++)
    {

        for (int j = 1; j <= col; j++)
        {
            cout << "* ";
        }
        cout<<"\n";
    }
}