/*Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
Integers in each column are sorted from top to bottom.*/



#include <bits/stdc++.h>
using namespace std;

bool searchinmatrix(vector<vector<int>>& mat, int k)
{
        if(mat.size() == 0)
            return false;
        int i = 0;
        int j = mat[0].size()-1;
        while(i<mat.size() && j>=0)
        {
            if(mat[i][j]==k)
                return true;
            if(mat[i][j]>k)
                j--;
            else
                i++;        
        }
        return false;

}

int main()
{
    vector<vector<int>> matrix ={{1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17}};
    int target=5;
    searchinmatrix(matrix,target)?cout<<"Found":cout<<"Not Found";
    return 0;
}

//@Soubhik_Ghosh
//TC = log(nxm)
//SC = O(1)


//Brute_force Algo has o(n2) complexity


