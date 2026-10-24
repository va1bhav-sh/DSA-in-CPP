
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        // Step 1: Create prefix sum array
        vector<int> prefixSum(n, 0);

        prefixSum[0] = nums[0];

        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }

        // Step 2: Store prefix sums and their frequencies
        unordered_map<int, int> m; // Prefix sum -> frequency

        // Step 3: Find subarrays whose sum equals k
        for (int j = 0; j < n; j++) {

            // Count subarrays starting from index 0
            if (prefixSum[j] == k) {
                count++;
            }

            // Find the previous prefix sum we need
            int val = prefixSum[j] - k;

            // If found, add its frequency to count
            if (m.find(val) != m.end()) {
                count += m[val];
            }

            // Initialize frequency if prefix sum is new
            if (m.find(prefixSum[j]) == m.end()) {
                m[prefixSum[j]] = 0;
            }

            // Increase frequency of current prefix sum
            m[prefixSum[j]]++;
        }

        return count;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {2, 1, 3};
    int k = 3;

    cout << sol.subarraySum(nums, k) << endl; // Output: 2

    return 0;
}
