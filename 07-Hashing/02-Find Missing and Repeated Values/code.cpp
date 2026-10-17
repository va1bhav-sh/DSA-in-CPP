#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> s;
        int n=grid.size();
        int a;
        int b;
        int expSum=0;
        int actualSum=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                actualSum+=grid[i][j];
            if(s.find(grid[i][j])!=s.end()){//This if block runs only when the current number is already present in the set.
                a=grid[i][j];
                ans.push_back(a);
               // break; removed break bcs we want to traverse across whole grid to find the actualsum
            }
            s.insert(grid[i][j]);
            }
        }
        expSum=(n*n)*(n*n+1)/2;
        b=expSum+a-actualSum;//expectedsum+a-b=actualSum
        ans.push_back(b);
        return ans;

    }
int main() {
    vector<vector<int>> grid = {
        {1, 3},
        {2, 2}
    };

    vector<int> ans = findMissingAndRepeatedValues(grid);

    cout << ans[0] << " " << ans[1];

    return 0;
}