/*Question:-    1                 1
                1 2             2 1
                1 2 3         3 2 1
                1 2 3 4     4 3 2 1
                1 2 3 4 5 5 4 3 2 1

*/

// No of rows = "n". Thus, run a loop for n times(outer loop)
// There is symmetry among the middle. The problem can be seen as a pattern in LHS of mirror + pattern at RHS of mirror
// So inside the outer loop, we will have 3 inner loops
// 1 for LHS part, 1 for the spaces in between and 1 for the RHS part
// Tricky part in this question is just formulating the formula for no of spaces in each row.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        // first half of mirror
        for (int j = 1; j <= i; j++)
            {
                if( j == i)
                    cout << j;
                else
                    cout << j << " ";
            }
        // spaces
        for (int k = 4 * (n - i); k >= 0; k--)
            cout << " ";

        // second half of mirror
        for (int j = i; j >= 1; j--)
            cout << j << " ";

        // go to next line
        cout << endl;
    }

    return 0;
}