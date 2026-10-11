#include <iostream>
#include <climits>
using namespace std;

int getMaxSum(int mat[0][3],int rows,int cols){
    int maxColsSum=INT_MIN;
    for (int i = 0; i < cols; i++)
    
    {
        int colsSumI=0;
        for (int j = 0; j < rows; j++)
        {
            colsSumI+=mat[j][i];
        }
        maxColsSum=max(maxColsSum,colsSumI);
        
    }
    return maxColsSum;
    
}
int main()
{
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9},};

    
    int rows = 3;
    int cols = 3;

    cout<< getMaxSum(matrix,rows,cols)<<endl;

   
    return 0;
}