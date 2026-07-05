//Optimal Two Pointer Approach
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height){
    int left=0;
    int right=height.size()-1;
    int maxArea=0;
    while(left<right){
        int width=right-left;
        int h=min(height[left],height[right]);
        int area=width*h;
        maxArea=max(maxArea,area);

        if (height[left]<height[right])
        {
            left++;
        }
        else{
            right--;
        }
    }
    return maxArea;
}

int main() {
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<<"Maximum Area= " << maxArea(height) <<endl;
    return 0;
}