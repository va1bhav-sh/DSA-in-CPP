#include <iostream>
#include <vector>
using namespace std;

int linearSearchVector(vector<int>& nums, int key){
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i]==key)
        {
            return i;
        }
        
    }
    return -1;
    
}
int main() {
    vector<int> nums={10,20,30,40,50};
    cout << linearSearchVector(nums,30);
    return 0;
}