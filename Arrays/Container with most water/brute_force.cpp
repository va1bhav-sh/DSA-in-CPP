//Brute Force Approach : Time Complexity:O(n^2)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int> & height){
    int n=height.size();
    int maxArea=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int width=j-i;
            int h=min(height[i],height[j]);
            int area=width*h;

            maxArea=max(maxArea,area);
        }
        
    }
    return maxArea;
}

int main() {
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<<"Maximum Area= " << maxArea(height) <<endl;
    return 0;
}