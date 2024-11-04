#include <iostream>
using namespace std;

int uniqeEle(int array[], int size)
{

    for (int i = 0; i < size; i++)
    {
        // int uniq = array[i];
        bool x = true;

        for (int j = 0; j < size; j++)
        {
            if (array[j] == array[i])
            {
                if(i!=j){
                 x= false;
                }
                // uniq = array[i];
                // break;
            }
        
        }
        if(x){
                cout << " " << array[i];

        }
    }
    return 0;
}

int main()
{
    int size = 6;
    int array[size] = {1, 2, 2, 3, 3, 0};
    uniqeEle(array, size);
}