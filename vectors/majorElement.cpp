#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

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


int majorWithOpt(vector <int> nums){
 
    int n = nums.size()-1;

    sort(nums.begin(),nums.end());

    int freq = 1;
    int ans = nums[0];

    for(int i=1;i<n;i++){

        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans=nums[i];
        }

     if(freq>n/2){
        return ans;
     }
    }
    

     return ans;
}

int mooreAlgo(vector <int> nums){

    int n = nums.size()-1;
    int freq = 0;
    int ans =0;

    for(int i=0;i<n;i++){

        if(freq==0){
            ans = nums[i];
        }
        if(ans==nums[i]) freq++;
        else freq--;
    }

    return ans;

}

int main()
{
    vector <int> karan = {2,2,2,2,4,5,5};

    int value = mooreAlgo(karan);

    cout<<"The values are "<<value;

}
