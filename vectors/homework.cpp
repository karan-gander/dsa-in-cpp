#include <iostream>
using namespace std;
#include <vector>

int reverseVec(vector<int> &nums)
{

    int firstIndex = 0;
    int lastIndex = nums.size() - 1;

    while (firstIndex <= lastIndex)
    {

        swap(nums[firstIndex], nums[lastIndex]);

        firstIndex++;
        lastIndex--;
    };
    return 0;
}

int main()
{

    // reverse of the vector

    vector<int> nums = {1, 2, 3, 4, 5};

    reverseVec(nums);

    cout << "Reverse of the vectore is \n";

    for (int val : nums)
    {

        cout << " " << val;
    };
}
