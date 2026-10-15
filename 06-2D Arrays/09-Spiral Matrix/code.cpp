#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int srow=0;
        int scol=0;
        int erow=m-1;
        int ecol=n-1;

        vector<int>ans;

        while(srow<=erow && scol<=ecol){//= condition is for odd matrix
            //top
            for(int j=scol;j<=ecol;j++){
                ans.push_back(matrix[srow][j]);
            }
            //right
            for(int i= srow+1;i<=erow;i++){
                ans.push_back(matrix[i][ecol]);
            }
            //bottom
           
            for(int j=ecol-1;j>=scol;j--){
                 if(srow==erow){
                     break;
            }
                ans.push_back(matrix[erow][j]);
            }
            //left
            for(int i=erow-1;i>=srow+1;i--){
                if(scol==ecol){
                    break;
                }
                ans.push_back(matrix[i][scol]);
            }
            srow++;
            erow--;
            scol++;
            ecol--;
        }
        return ans;
    }
int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    vector<int> ans = spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}