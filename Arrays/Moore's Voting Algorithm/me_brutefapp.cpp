//Majority Elemnet Brute Force Approach O(n^2)
#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int> &nums){
    int n=nums.size();
    for (int val:nums)
    {
        int freq=0;
        for (int element:nums)
        {
            if (element==val)
            {
              freq++;  
            }
            
        }
        if (freq>n/2)
        {
            return val;
        }
        
        
    }
    return -1;

}
int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    cout << "Majority Element = " << majorityElement(nums);
    return 0;
}