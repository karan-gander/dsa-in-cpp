#include <iostream>
#include <climits>
using namespace std;

int maxSumOfSubarray(int array[], int size)
{

    int maxSum = INT_MIN;
    for (int start = 0; start < size; start++)
    {
        int curSum = 0;
        for (int end = start; end < size; end++)
        {

            curSum += array[end];
        }
        maxSum = max(curSum, maxSum);
    }
    return maxSum;
}

int kadansAlgo(int array[], int size)
{
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < size; i++)
    {
        currSum += array[i];

        maxSum = max(currSum, maxSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

int main()
{

    int array[5] = {2, -4, 6, 8, 10};

    
    int sum = kadansAlgo(array,5);

    // for (int start = 0; start < 5; start++)
    // {

    //     for (int end = start; end < 5; end++)
    //     {

    //         for (int i = start; i <= end; i++)
    //         {

    //             cout << array[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    cout<<"  "<<sum;

    //  kadans algo for sloveing max sum of subarray

    return 0;
}
