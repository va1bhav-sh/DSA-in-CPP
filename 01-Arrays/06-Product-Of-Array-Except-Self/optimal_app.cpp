// Prefix + Suffix Arrays (O(n) Space)
#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();

    vector<int> prefix(n);
    vector<int> suffix(n);
    vector<int> ans(n);

    prefix[0] = 1;
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        ans[i] = suffix[i] * prefix[i];
    }

    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4};

    vector<int> ans = productExceptSelf(nums);

    cout << "Output: ";
    for (int x : ans)
        cout << x << " ";

    return 0;
    return 0;
}