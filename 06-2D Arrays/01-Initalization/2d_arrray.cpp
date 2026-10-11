#include <iostream>
using namespace std;

int main()
{
    // int matrix[4][3] = {{1, 2, 3},
    //                     {4, 5, 6},
    //                     {7, 8, 9},
    //                     {10, 11, 12}};

    int matrix[4][3];
    int row = 4;
    int col = 3;

    // Input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // matrix[2][1]=18;
    // cout<< matrix[2][1];

    // Loops on 2D Arrays
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}