#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
        int st=0;
        int end=nums.size()-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[st]<=nums[mid]){//Left Sorted
                if(nums[st]<=target && target<=nums[mid]){//Search in left
                    end=mid-1;
                }else{
                    st=mid+1;
                }
            }
            else{//Right Sorted
            if(nums[mid]<=target && target <=nums[end]){//Search in right
                st=mid+1;
            }else{
                end=mid-1;
            }

            }
        }
        return -1;
    }
int main() {
    vector<int> nums={4,5,6,7,0,1,2};

    cout << search(nums,0);
    return 0;
}