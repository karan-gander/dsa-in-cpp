#include <iostream>
using namespace std;
#include <vector>

int majorElementBrut(vector<int> nums)
{

    int n = nums.size() - 1;
    for (int val : nums)
    {

        int freq = 0;

        for (int ele : nums)
        {

            if (val == ele)
            {
                freq++;
            }
        }

        if(freq>n/2){
            return val;
        }
        // else{
        //     return -1;
        // }
    }

    return -1;
    
};

int main()
{
    vector <int> karan = {2,2,4,5,5,5,5,5};

    int value = majorElementBrut(karan);

    cout<<"The values are "<<value;

}
