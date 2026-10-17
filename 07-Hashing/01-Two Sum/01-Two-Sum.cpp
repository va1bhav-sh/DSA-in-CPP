
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;

    for (int i = 0; i < nums.size(); i++) {
        int first = nums[i];
        int sec = target - first;

        if (m.find(sec) != m.end()) {///m.end() as a special marker that means “the element was not found.”
        //find retuns .end() when it did not find the key
            return {i, m[sec]};
        }

        m[first] = i;
    }

    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    cout << "Indices: ";
    for (int i : ans) {
        cout << i << " ";
    }

    return 0;
}
