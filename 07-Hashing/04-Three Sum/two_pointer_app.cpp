#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
   vector<vector<int>> threeSum(vector<int>& nums) {
        //2 Pointer Approach
        int n=nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){//to do not repeat for same value of i
                continue;
            }
            int j=i+1;
            int k=n-1;
            
            while(j<k){
                int  sum=nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]){//To go to new value of j so it can not repeat
                        j++;
                    }
                }
            }
        }
        return ans;
    }
int main() {
   vector<int> nums = {-1, 0, 1, 2, -1, -4};

    for (auto trip : threeSum(nums)) {
        for (int x : trip)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}