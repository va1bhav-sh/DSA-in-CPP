
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>> ans;

    // Sort to use two pointers and skip duplicates
    sort(nums.begin(), nums.end());

    // Fix first element i
    for (int i = 0; i < n - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1])
            continue; // Skip duplicate i

        // Fix second element j
        for (int j = i + 1; j < n - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue; // Skip duplicate j

            // Two pointers for remaining elements
            int k = j + 1;
            int l = n - 1;

            while (k < l) {
                // long long prevents integer overflow
                long long sum = (long long)nums[i]
                              + nums[j] + nums[k] + nums[l];

                if (sum < target) {
                    k++; // Increase sum
                }
                else if (sum > target) {
                    l--; // Decrease sum
                }
                else {
                    // Found a valid quadruplet
                    ans.push_back({
                        nums[i], nums[j], nums[k], nums[l]
                    });

                    k++;
                    l--;

                    // Skip duplicate k values
                    while (k < l && nums[k] == nums[k - 1])
                        k++;

                    // Skip duplicate l values
                    while (k < l && nums[l] == nums[l + 1])
                        l--;
                }
            }
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    for (auto quad : fourSum(nums, target)) {
        for (int x : quad)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
