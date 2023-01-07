/*Pattern:- *
 **
 ***
 ****
 */

// No of starts in each row = total no of rows, i.e "n"
// Thus, run a loop for n times(outer loop) and in each row, print the columns using a inner loop.
// the limit for column is that no of columns to be printed per line = no of rows

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            // j + 1 is printed instead of j because array indexes start from 0 not 1.
            cout << j + 1;
        }
        cout << endl;
    }
    return 0;
}