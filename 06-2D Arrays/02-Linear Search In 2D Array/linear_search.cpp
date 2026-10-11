#include <iostream>
using namespace std;

pair<int, int> lineraSearch(int mat[][3], int rows, int cols, int key)
{ // We must specift the column as compiler needs this info to access the elements of 2d array correctly
    pair<int, int> p = {rows, cols};

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            pair<int, int> p = {i, j};
            if (mat[i][j] == key)
            {
                // return true;
                return {i, j};
            }
        }
    }
    return {-1, -1};
}
int main()
{
    int matrix[4][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9},
                        {10, 11, 12}};

    int rows = 4;
    int cols = 3;

    // cout << lineraSearch(matrix, rows, cols, 20) << endl;cout doesn't directly know how to print a pair<int, int>
    pair<int, int> result = lineraSearch(matrix, rows, cols, 8);

    cout << result.first << ", " << result.second << endl;

    return 0;
}