#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
 vector<vector<int>> threeSum(vector<int>& nums) {
        //Brute Force
        int n=nums.size();
        

        set<vector<int>>uniqueTriplets;
        for(int i=0;i<n;i++){
            int tar=-nums[i];
            set<int> s;

            for(int j=i+1;j<n;j++){
                int third=tar-nums[j];
                if(s.find(third)!=s.end()){
                    vector<int>trip={nums[i],nums[j],third};
                    sort(trip.begin(),trip.end());
                    uniqueTriplets.insert(trip);
                }
                s.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(uniqueTriplets.begin(),uniqueTriplets.end());
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