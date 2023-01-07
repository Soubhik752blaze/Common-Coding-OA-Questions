/*Pattern:-     *
               ***
              *****
             *******    
            *********
 */

// No of rows = "n"
// Thus, run a loop for n times(outer loop) and in each row, no of stars to be printed is 2*row_no + 1
// Also, the first "*" appears after "x" no of spaces, where x is n - row no.
// Thus, have another inner loop inside the outer loop to print the spaces.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for(int x = 0; x < n - i; x++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2*i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}