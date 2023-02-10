/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.*/

#include <bits/stdc++.h>
using namespace std;

void matrixzeroes(int arr[][4], int row, int col)
{
    // for checking first row and column having 0s or not, we have 2 different variables
    int colflag = 0;
    int rowflag = 0;

    // after the first row and col values are analysed using the 2 variables
    // Then, we use them as auxillary arrays for checking whether a row or col has 0 or not
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
        {
            if (i == 0 && arr[i][j] == 0)
                rowflag = 1;
            if (j == 0 && arr[i][j] == 0)
                colflag = 1;
            if (arr[i][j] == 0)
            {
                arr[0][j] = 0;
                arr[i][0] = 0;
            }
        }

    //if a row or col has 0, make every element of that row/col as 0
    for (int i = 1; i < row; i++)
        for (int j = 1; j < col; j++)
            if (arr[0][j] == 0 || arr[i][0] == 0)
                arr[i][j] = 0;

    // modify first row if there was any 0
    if (rowflag == true)
        for (int i = 0; i < col; i++)
            arr[0][i] = 0;

    // modify first col if there was any 0
    if (colflag == true)
        for (int i = 0; i < row; i++)
            arr[i][0] = 0;
}

int main()
{
    int arr[4][4] = {{1, 1, 1, 1},
                     {1, 0, 1, 1},
                     {1, 1, 1, 1},
                     {1, 1, 0, 1}};
    matrixzeroes(arr, 4, 4);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}
