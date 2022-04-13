//Given a boolean matrix mat[R][C] of size RxC, modify it such that if a matrix cell mat[i][j] is 1 ,
//then make all cells of ith row and jth column as 1

#include <bits/stdc++.h>
using namespace std;

#define R 3
#define C 4
 
void modifyMatrix(bool mat[R][C])
{
    bool row[R],col[C];
    int i,j;

    for ( i = 0; i < R; i++)
        row[i]=0;
    for ( j = 0; j < C; j++)
        col[j]=0;
        
    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            if(mat[i][j]==1)
             {   
                row[i]=1;
                col[j]=1; 
             }   

    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
            if ( row[i] == 1 || col[j] == 1 )
                mat[i][j] = 1;

    }    

}   


        



 
/* A utility function to print a 2D matrix */
void printMatrix(bool mat[R][C])
{
    int i, j;
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
 
// Driver Code
int main()
{
    bool mat[R][C] = { {1, 0, 0, 1},
                       {0, 0, 1, 0},
                       {0, 0, 0, 0}};
 
    cout << "Input Matrix \n";
    printMatrix(mat);
 
    modifyMatrix(mat);
 
    printf("\n Matrix after modification \n");
    printMatrix(mat);
 
    return 0;
}
 