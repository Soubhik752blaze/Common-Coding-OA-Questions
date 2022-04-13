/*QUESTION :- Given a 2D array, print it in zigzag form.
Input : 
        1    2   3   4   5
        6    7   8   9   10
        11   12  13  14  15
        16  17  18  19   20
Output :
1 2 3 4 5 10 9 8 7 6 11 12 13 14 15 20 19 18 17 16 
*/


#include <bits/stdc++.h>
using namespace std;

#define R 3
#define C 5


void zigzagprint(int mat[R][C])
{
    int i=0, j=0;
    while(i<R)
    {   
        if(i==0 || i%2==0)
        {    for(j=0;j<C;j++)
                {
                    cout<<mat[i][j]<< " ";
                    
                }
            cout<<endl;
        }    
        if(i%2==1)
        {    for(j=C-1;j>=0;j--)
                {
                    cout<<mat[i][j]<< " ";
                    
                }
            cout<<endl;
        }                   
        i++;
    }
}

void printMatrix(int mat[R][C])
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
    int mat[R][C] = { { 1, 2, 3, 4,5 },
                    { 6, 7, 8,9,10},
                    { 11,12,13,14,15}};
    cout<<"Original Matrix :-"<<endl;
    printMatrix(mat);
    // Function Call
    cout<<"Zig Zag Printed Matrix :- "<<endl;
    zigzagprint(mat);
    return 0;
}