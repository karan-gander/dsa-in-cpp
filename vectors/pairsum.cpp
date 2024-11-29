#include <iostream>
using namespace std;
#include <vector>

vector<int> pairSum(vector<int> nums, int target)
{

    vector<int> ans;
    int n = nums.size() - 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (nums[i] + nums[j] == target)
            {

                ans.push_back(i);
                ans.push_back(j);
            };
        };
    };
    return ans;
    // return ans;
};

vector<int> pairSumOpt(vector<int> nums, int target)
{

    vector<int> ans;
    int startPoint = 0;
    int endPoint = nums.size() - 1;

    while (startPoint < endPoint)
    {

        // if ((nums[startPoint] + nums[endPoint]) == target)
        // {
        //     ans.push_back(startPoint);
        //     ans.push_back(endPoint);
        // };
        if ((nums[startPoint] + nums[endPoint]) < target)
        {
            startPoint++;
        }
        else if ((nums[startPoint] + nums[endPoint]) > target)
        {
            endPoint--;
        }
        else{
            ans.push_back(startPoint);
            ans.push_back(endPoint);
            return ans;
        }

    }
        return ans;
}

int main()
{
    vector<int> arr = {2, 5, 6, 8};
    // vector<int> ans = pairSum(arr, 11);
    vector<int> ans = pairSumOpt(arr, 13);

    cout << ans[0] << "\n";
    cout << ans[1];
}