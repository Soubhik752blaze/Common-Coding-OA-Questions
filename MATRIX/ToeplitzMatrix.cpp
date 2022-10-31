/*Question :- Given an m x n matrix, return true if the matrix is Toeplitz. 
Otherwise, return false.

A matrix is Toeplitz if every diagonal from top-left to bottom-right has the same elements.*/

#include<bits/stdc++.h>
using namespace std;

bool isToeplitzMatrix(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    //edge case
    if(row == 1)
        return true;
        
    //O(row*col) TC
    for(int i = 1; i < row; i++)
        for(int j = 0; j < col; j++)
        {
            if(i >= 1 && j >= 1)
                if(matrix[i][j] != matrix[i-1][j-1])
                    return false;
        }
        
    return true;
}

int main()
{
    vector<vector<int>> matrix = {{1,2,3,4},{5,1,2,3},{9,5,1,2}};
    cout << "Is given matrix a Toeplitz matrix ? Ans:- " << (isToeplitzMatrix(matrix)?"Yes":"No");
}

//TC -> O(m*n)
//SC -> o(1)


