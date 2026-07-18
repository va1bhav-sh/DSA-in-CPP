#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int n = nums.size();
    // Step 1: Find pivot
    int pivot = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            pivot = i;
            break;
        }
    }
    // If no pivot
    if (pivot == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }
    // Step 2: Find rightmost greater element
    for (int i = n - 1; i > pivot; i--)
    {
        if (nums[i] > nums[pivot])
        {
            swap(nums[i], nums[pivot]);
            break;
        }
    }
    // Step 3: Reverse suffix
    reverse(nums.begin() + pivot + 1, nums.end());
}

int main()
{
    vector<int> nums = {1, 2, 5, 4, 3};

    nextPermutation(nums);

    for (int x : nums)
        cout << x << " ";

    return 0;
}